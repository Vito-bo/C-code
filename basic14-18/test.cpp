/*
//basic-14-ʱ��ת��
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int h = t / 3600;
	int m = t % 3600 / 60;
	int s = t % 3600 % 60;
	cout << h <<':' << m << ':' << s << endl;
	return 0;
}

//basic-15-�ַ����Ա�
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int count = 0;
	if (s1.length() != s2.length())//���Ȳ����
		cout << 1 << endl;
	else//�������
	{
		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] != s2[i])
			{
				if (abs(s1[i] - s2[i]) != 32)
				{
					cout << 4 << endl;
					return 0;
				}
				else//�����ִ�Сд
				{
					count++;
					continue;
				}
			}
		}
		if (count == 0)
			cout << 2 << endl;
		else
			cout << 3 << endl;
	}
	return 0;
}


////basic-16-�ֽ�������
////��һ����n�ֽ�Ϊ���ɸ���С�������е������Ļ�
//#include <iostream>
//using namespace std;
//
////�ж��Ƿ�Ϊ����
//bool Isprime(int n){
//	if (n < 2)
//		return false;
//	if (n == 2)
//		return true;
//	for (int i = 2; i*i <= n; i++){
//		if (n%i == 0)
//			return false;
//	}
//	return true;
//}
//// �ֽ�����
//void decompose(int n){
//	cout << n << '=';
//	for (int i = 2; i <= n; i++){
//		if (i == n)
//			break;
//		if (n%i == 0 && Isprime(i)){
//			cout << i << '*';
//			n /= i;
//			i = 1;
//		}
//	}
//	cout << n << endl;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++){
//		decompose(i);
//	}
//	return 0;
//}

// basic-17-����˷�
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[101][101];
int c[101][101];
int ans[101][101];

int main()
{
	int i, j, k, l, n, m;
	cin >> n >> m;  //������� ����
	for (i = 1; i <= n; i++)
	for (j = 1; j <= n; j++)
		cin>>a[i][j]; //�������
	
	memset(ans, 0, sizeof(ans));//��ʼ��Ϊ0
	for (i = 1; i <= n; i++) 
		ans[i][i] = 1;          //0����Ϊ��λ����
	for (k = 1; k <= m; k++)    //�����ݵĴ���
	{
		memset(c, 0, sizeof(c));//��ʼ��Ϊ0
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				for (l = 1; l <= n; l++)
					c[i][j] += ans[i][l] * a[l][j];
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				ans[i][j] = c[i][j];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j<n; j++)
			cout<< ans[i][j] << ' ';
		cout<<ans[i][n]<<endl;
	}
	return 0;
}


//basic-18-���������
#include <iostream>
#include <algorithm>
using namespace std;

//��������Ϊ����������߽�ϴ�ֵ���ұ߽��Сֵ��
//���±߽�ϴ�ֵ���ϱ߽��Сֵ
int main()
{
	double x1, y1, x2, y2;
	double x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	double left = max(min(x1, x2), min(x3, x4));
	double right = min(max(x1, x2), max(x3, x4));
	
	double down = max(min(y1, y2), min(y3, y4));
	double up = min(max(y1, y2), max(y3, y4));
	if (left<right && down<up)
		printf("%.2f\n", (right - left)*(up - down));
	else
		printf("0.00");
	return 0;
}
*/
//basic-18-�����Ĵ���
#include<iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	int j = n - 1;
	int cnt = 0; //��¼��������
	int flag = 0;//����Ƿ��Ѿ����ڸ���Ϊ�������ַ�
	//���Ҷ�j��ʼѰ����s[i]��ͬ��s[k]
	for (int i = 0; i < j; i++){
		for (int k = j; k >= i; k--){
			if (k == i){//�ҵ��˵�����һ���ַ���
				if (n % 2 == 0 || flag == 1){//������ַ�������Ϊż������֮ǰ�Ѿ��ҵ�һ���������ַ������޷�����Ϊ������
					cout << "Impossible";
					return 0;
				}
				cnt += n / 2 - i;
			}
			else{
				if (s[i] == s[k]){ //���ҵ���s[k]�Ƶ����Ҷ�
					for (int l = k; l < j; l++){
						swap(s[l], s[l + 1]);
						cnt++;
					}
					j--;
					break;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}