
//basic26-报时助手
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

////basic27-2n皇后问题
//
////可以理解为两次n皇后查找问题
////每找到一种黑皇后摆放方式，就在此基础上找出所有白皇后摆放方式
//#include <iostream>
//using namespace std;
//
//const int maxn = 10;
//int n;
//int map_Q[maxn][maxn];
//int posb[maxn] = { 0 };  //黑皇后 
//int posw[maxn] = { 0 };  //白皇后 
//int ans;
//
//bool checkw(int cur) //检查函数
//{
//	for (int i = 1; i < cur; i++)
//	if (posw[i] == posw[cur] || abs(i - cur) == abs(posw[i] - posw[cur]))  //如果列相等或者在斜对角线上 
//		return false;
//	return true;
//}
//
//bool checkb(int cur)  //检查函数
//{
//	for (int i = 1; i < cur; i++)
//	if (posb[i] == posb[cur] || abs(i - cur) == abs(posb[i] - posb[cur]))  //如果列相等或者在斜对角线上 
//		return false;
//	return true;
//}
//
//void dfs_white(int cur)  //深度优先算法 
//{
//	if (cur == n + 1)  //白皇后也全部放完，次数+1
//	{
//		ans++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (posb[cur] == i) //表示第cur列的第i行位置已经被黑皇后占用，
//			continue;        //结束当前循环，i+1
//		if (map_Q[cur][i] == 0)  //再判断前提条件是否成立
//			continue;
//		posw[cur] = i;    //尝试把第cur列的白皇后放在第i行上
//		if (checkw(cur))   //判断能否放置白皇后
//			dfs_white(cur + 1);  //递归
//	}
//}
//
//void dfs_black(int cur)
//{
//	if (cur == n + 1)  //当黑皇后处理完时，再处理白皇后
//	{
//		dfs_white(1);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (map_Q[cur][i] == 0)  //如果第cur列第i行满足放皇后的前提条件即 mp[cur][i] == 1
//			continue;  //如果不满足，则结束当前循环，进行下一次循环即i+1。
//		posb[cur] = i;     //就尝试把第cur列的黑皇后放在第i行上
//		if (checkb(cur))   //然后判断该尝试是否成立，如成立，则进行递归，如不成立，则尝试把当前列的黑皇后放在下一行(i+1行)上。
//			dfs_black(cur + 1);  //递归
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)   //定义棋盘
//	for (int j = 1; j <= n; j++)
//		cin >> map_Q[i][j];
//	ans = 0;
//	dfs_black(1);    //先把黑皇后放在第一列
//	cout << ans << endl;
//	return 0;
//}

////basic28-Huffuman树
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

//basic29-高精度加法
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
//	memset(a, 0, sizeof(a));//把a数组中的字节都定义为0，避免后面在while中，位数低的数组用程序分配的数进行运算 
//	memset(b, 0, sizeof(b));
//	memset(b, 0, sizeof(b));
//	for (i = 0; i<len1; i++){
//		a[len1 - i] = str1[i] - 48;//0的ASCII值是48 
//	}
//	for (i = 0; i<len2; i++){
//		b[len2 - i] = str2[i] - '0';//从b[len2]开始赋值，直到b[1] 
//	}
//	while (len <= len1 || len <= len2){//如果两个加数位数不一样多，则按位数多的一个进行计算
//		c[len] = a[len] + b[len] + r;
//		r = c[len] / 10;
//		c[len] = c[len] % 10;
//		len++;
//	}
//	c[len] = r;
//	if (r == 0)//如果最高位的前一位不需要满10进1，则把while中给最高位满10进1预留的位数减去 
//		len--;
//	for (i = len; i >= 1; i--)//从c[len]到c[1]，输出c数组 
//		cout << c[i];
//	cout << endl;
//	return 0;
//}

//basic30-介乘计算
#include<iostream>
#include<algorithm>
#define MAX 100000
using namespace std;

int a[MAX];

int main(){
	int n;
	cin >> n;

	a[1] = 1; //个位的数字是a[1] 

	/*
	x 代表当前的位数（就是表示有多少位）
	y 代表当前的进位，由于每个数组的元素都要乘以一个数,这个数很大，就导致了进位，
	原本数还需要加上进位结果，而x也随着进位y的变化而变化,将每一个y都分配
	好，代表此次乘法结束

	在某一位的进位的话就是进位%10
	进位到高位的时候，缩小10倍，所以整除
	*/
	int pos_now = 1, jw;

	for (int i = 2; i <= n; i++){
		jw = 0;
		for (int j = 1; j <= pos_now; j++){
			int t = a[j] * i + jw; //临时的每一位*对应的i的结果，再加上在这个位置的进位就是真实结果 
			a[j] = t % 10; //实际a[i]就是t取余 
			jw = t / 10; //进位到高位的时候，缩小10倍，所以整除 
		}

		//当到当前位数（实际上也是最大）x的时候，多出来的数还要进位
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