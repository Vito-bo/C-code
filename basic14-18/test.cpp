/*
//basic-14-时间转换
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

//basic-15-字符串对比
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
	if (s1.length() != s2.length())//长度不相等
		cout << 1 << endl;
	else//长度相等
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
				else//不区分大小写
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


////basic-16-分解质因数
////将一个数n分解为若干个从小到大排列的质数的积
//#include <iostream>
//using namespace std;
//
////判断是否为素数
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
//// 分解因数
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

// basic-17-矩阵乘法
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
	cin >> n >> m;  //输入阶数 和幂
	for (i = 1; i <= n; i++)
	for (j = 1; j <= n; j++)
		cin>>a[i][j]; //输入矩阵
	
	memset(ans, 0, sizeof(ans));//初始化为0
	for (i = 1; i <= n; i++) 
		ans[i][i] = 1;          //0次幂为单位矩阵
	for (k = 1; k <= m; k++)    //计算幂的次数
	{
		memset(c, 0, sizeof(c));//初始化为0
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


//basic-18-矩形面积交
#include <iostream>
#include <algorithm>
using namespace std;

//公共部分为两个矩形左边界较大值到右边界较小值，
//从下边界较大值到上边界较小值
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
//basic-18-完美的代价
#include<iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	int j = n - 1;
	int cnt = 0; //记录交换次数
	int flag = 0;//标记是否已经存在个数为奇数的字符
	//从右端j开始寻找与s[i]相同的s[k]
	for (int i = 0; i < j; i++){
		for (int k = j; k >= i; k--){
			if (k == i){//找到了单独的一个字符，
				if (n % 2 == 0 || flag == 1){//且如果字符床长度为偶数过着之前已经找到一个单独的字符，就无法调整为回文了
					cout << "Impossible";
					return 0;
				}
				cnt += n / 2 - i;
			}
			else{
				if (s[i] == s[k]){ //把找到的s[k]移到最右端
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