
//basic26-��ʱ����
//#include <iostream>
//using namespace std;
//
//void printM(int x)
//{
//	int m = x;
//	switch (m){
//		case 0:{cout << "o'clock"; break; }
//		case 1:{cout << "one"; break; }
//		case 2:{cout << "two"; break; }
//		case 3:{cout << "three"; break; }
//		case 4:{cout << "four"; break; }
//		case 5:{cout << "five"; break; }
//		case 6:{cout << "six"; break; }
//		case 7:{cout << "seven"; break; }
//		case 8:{cout << "eight"; break; }
//		case 9:{cout << "nine"; break; }
//		case 10:{cout << "ten"; break; }
//		case 11:{cout << "eleven"; break; }
//		case 12:{cout << "twelve"; break; }
//		case 13:{cout << "thirteen"; break; }
//		case 14:{cout << "fourteen"; break; }
//		case 15:{cout << "fifteen"; break; }
//		case 16:{cout << "sixteen"; break; }
//		case 17:{cout << "seventeen"; break; }
//		case 18:{cout << "eighteen"; break; }
//		case 19:{cout << "nineteen"; break; }
//		case 20:{cout << "twenty"; break; }
//		case 30:{cout << "thirty"; break; }
//		case 40:{cout << "forty"; break; }
//		case 50:{cout << "fifty"; break; }
//		default:{
//				   int a, b;
//				   a = m - m % 10;
//				   b = m % 10;
//				   printM(a);
//				   cout << " ";
//				   printM(b);
//				   break;
//		}
//	}
//}
//
//int main()
//{
//	int h, m;
//	cin >> h >> m;
//	switch (h){
//	case 0:{cout << "zero "; break; }
//	case 1:{cout << "one "; break; }
//	case 2:{cout << "two "; break; }
//	case 3:{cout << "three "; break; }
//	case 4:{cout << "four "; break; }
//	case 5:{cout << "five "; break; }
//	case 6:{cout << "six "; break; }
//	case 7:{cout << "seven "; break; }
//	case 8:{cout << "eight "; break; }
//	case 9:{cout << "nine "; break; }
//	case 10:{cout << "ten "; break; }
//	case 11:{cout << "eleven "; break; }
//	case 12:{cout << "twelve "; break; }
//	case 13:{cout << "thirteen "; break; }
//	case 14:{cout << "fourteen "; break; }
//	case 15:{cout << "fifteen "; break; }
//	case 16:{cout << "sixteen "; break; }
//	case 17:{cout << "seventeen "; break; }
//	case 18:{cout << "eighteen "; break; }
//	case 19:{cout << "nineteen "; break; }
//	case 20:{cout << "twenty "; break; }
//	case 21:{cout << "twenty one "; break; }
//	case 22:{cout << "twenty two "; break; }
//	case 23:{cout << "twenty three "; break; }
//	default:
//		break;
//	}
//	printM(m);
//	return 0;
//}

////basic27-2n�ʺ�����
//
////�������Ϊ����n�ʺ��������
////ÿ�ҵ�һ�ֺڻʺ�ڷŷ�ʽ�����ڴ˻������ҳ����а׻ʺ�ڷŷ�ʽ
//#include <iostream>
//using namespace std;
//
//const int maxn = 10;
//int n;
//int map_Q[maxn][maxn];
//int posb[maxn] = { 0 };  //�ڻʺ� 
//int posw[maxn] = { 0 };  //�׻ʺ� 
//int ans;
//
//bool checkw(int cur) //��麯��
//{
//	for (int i = 1; i < cur; i++)
//	if (posw[i] == posw[cur] || abs(i - cur) == abs(posw[i] - posw[cur]))  //�������Ȼ�����б�Խ����� 
//		return false;
//	return true;
//}
//
//bool checkb(int cur)  //��麯��
//{
//	for (int i = 1; i < cur; i++)
//	if (posb[i] == posb[cur] || abs(i - cur) == abs(posb[i] - posb[cur]))  //�������Ȼ�����б�Խ����� 
//		return false;
//	return true;
//}
//
//void dfs_white(int cur)  //��������㷨 
//{
//	if (cur == n + 1)  //�׻ʺ�Ҳȫ�����꣬����+1
//	{
//		ans++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (posb[cur] == i) //��ʾ��cur�еĵ�i��λ���Ѿ����ڻʺ�ռ�ã�
//			continue;        //������ǰѭ����i+1
//		if (map_Q[cur][i] == 0)  //���ж�ǰ�������Ƿ����
//			continue;
//		posw[cur] = i;    //���԰ѵ�cur�еİ׻ʺ���ڵ�i����
//		if (checkw(cur))   //�ж��ܷ���ð׻ʺ�
//			dfs_white(cur + 1);  //�ݹ�
//	}
//}
//
//void dfs_black(int cur)
//{
//	if (cur == n + 1)  //���ڻʺ�����ʱ���ٴ���׻ʺ�
//	{
//		dfs_white(1);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (map_Q[cur][i] == 0)  //�����cur�е�i������Żʺ��ǰ�������� mp[cur][i] == 1
//			continue;  //��������㣬�������ǰѭ����������һ��ѭ����i+1��
//		posb[cur] = i;     //�ͳ��԰ѵ�cur�еĺڻʺ���ڵ�i����
//		if (checkb(cur))   //Ȼ���жϸó����Ƿ�����������������еݹ飬�粻���������԰ѵ�ǰ�еĺڻʺ������һ��(i+1��)�ϡ�
//			dfs_black(cur + 1);  //�ݹ�
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)   //��������
//	for (int j = 1; j <= n; j++)
//		cin >> map_Q[i][j];
//	ans = 0;
//	dfs_black(1);    //�ȰѺڻʺ���ڵ�һ��
//	cout << ans << endl;
//	return 0;
//}

////basic28-Huffuman��
//#include<iostream>
//#include<algorithm>
//#define N 105
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	int a[105];
//
//	for (int i = 0; i<n; i++)
//		cin >> a[i];
//
//	sort(a + 0, a + n);
//
//	int index = 0;
//	int res = 0;
//	while (index<(n - 1)){
//		res += (a[index] + a[index + 1]);
//		a[index + 1] = (a[index] + a[index + 1]);
//		index++;
//
//		sort(a + index, a + (n));
//	}
//	cout << res;
//
//	return 0;
//}

//basic29-�߾��ȼӷ�
//#include <iostream>
//#include <cmath>
//#include <string.h>
//using namespace std;
//
//int main(int argc, char *argv[]) {
//	int a[101], b[101], c[101];
//	string str1, str2;
//	int len1, len2, len = 1, i, r = 0;
//	cin >> str1 >> str2;
//	len1 = str1.length();
//	len2 = str2.length();
//	memset(a, 0, sizeof(a));//��a�����е��ֽڶ�����Ϊ0�����������while�У�λ���͵������ó����������������� 
//	memset(b, 0, sizeof(b));
//	memset(b, 0, sizeof(b));
//	for (i = 0; i<len1; i++){
//		a[len1 - i] = str1[i] - 48;//0��ASCIIֵ��48 
//	}
//	for (i = 0; i<len2; i++){
//		b[len2 - i] = str2[i] - '0';//��b[len2]��ʼ��ֵ��ֱ��b[1] 
//	}
//	while (len <= len1 || len <= len2){//�����������λ����һ���࣬��λ�����һ�����м���
//		c[len] = a[len] + b[len] + r;
//		r = c[len] / 10;
//		c[len] = c[len] % 10;
//		len++;
//	}
//	c[len] = r;
//	if (r == 0)//������λ��ǰһλ����Ҫ��10��1�����while�и����λ��10��1Ԥ����λ����ȥ 
//		len--;
//	for (i = len; i >= 1; i--)//��c[len]��c[1]�����c���� 
//		cout << c[i];
//	cout << endl;
//	return 0;
//}

//basic30-��˼���
#include<iostream>
#include<algorithm>
#define MAX 100000
using namespace std;

int a[MAX];

int main(){
	int n;
	cin >> n;

	a[1] = 1; //��λ��������a[1] 

	/*
	x ����ǰ��λ�������Ǳ�ʾ�ж���λ��
	y ����ǰ�Ľ�λ������ÿ�������Ԫ�ض�Ҫ����һ����,������ܴ󣬾͵����˽�λ��
	ԭ��������Ҫ���Ͻ�λ�������xҲ���Ž�λy�ı仯���仯,��ÿһ��y������
	�ã�����˴γ˷�����

	��ĳһλ�Ľ�λ�Ļ����ǽ�λ%10
	��λ����λ��ʱ����С10������������
	*/
	int pos_now = 1, jw;

	for (int i = 2; i <= n; i++){
		jw = 0;
		for (int j = 1; j <= pos_now; j++){
			int t = a[j] * i + jw; //��ʱ��ÿһλ*��Ӧ��i�Ľ�����ټ��������λ�õĽ�λ������ʵ��� 
			a[j] = t % 10; //ʵ��a[i]����tȡ�� 
			jw = t / 10; //��λ����λ��ʱ����С10������������ 
		}

		//������ǰλ����ʵ����Ҳ�����x��ʱ�򣬶����������Ҫ��λ
		while (jw){
			a[++pos_now] = jw % 10;
			jw /= 10;
		}

	}
	for (int i = pos_now; i >= 1; i--){
		cout << a[i];
	}
	return 0;
}