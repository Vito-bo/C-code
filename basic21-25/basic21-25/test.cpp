
/*
//basic21-Sine之舞
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string a[201];
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			a[i] = "sin(1";
			continue;
		}
		a[i] = a[i - 1];
		if (i % 2 == 1) {
			a[i] += "-";
		}
		else {
			a[i] += "+";
		}
		a[i] += "sin(";
		a[i] += (char)(i + '1');
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			a[i] += ")";
		}
	}
	for (int i = 2; i <= n; i++) {
		s += "(";
	}
	for (int i = n - 1; i >= 1; i--) {
		s += a[n - 1 - i];
		s += "+";
		s += (char)(i + 1 + '0');
		s += ")";
	}
	s += a[n - 1];
	s += "+1";
	cout << s;
	return 0;
}

//basic22-FJ的字符串
//输出是中间对称的，类似于二叉树的中序遍历
#include <iostream>
#include<iostream>
#include<cstdio>
using namespace std;
void Print(int n){
	if (n == 1)  //递归出口
	{
		cout << 'A';
		return;
	}
	else 
	{
		Print(n - 1);
		cout << char('A' + n - 1);
		Print(n - 1);
	}
}
int main()
{
	int n; 
	cin >>  n;
	Print(n);
	return 0;
}
*/
//basic23-芯片测试
#include<iostream>
using namespace std;
#define N 26
int main()
{
	int n;
	cin >> n;
	int chip[N][N], sum;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> chip[i][j];
	for (int j = 0; j < n; ++j)
	{
		sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (chip[i][j] == 1)
				sum++;
		}
		if (sum > n / 2)
			cout << j + 1 << ' ';
	}
	return 0;
}
