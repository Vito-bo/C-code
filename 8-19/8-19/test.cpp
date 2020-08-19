
// 函数

//C语言常用库函数：IO函数/字符串操作函数/字符操作函数/内存操作函数
//时间/日期函数/数学函数
#include <stdio.h>
#include <string.h>

//int Max(int a, int b)
//{
//	return ((a) > (b ))? (a) : (b);
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int *a, int *b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}

////练习
////1.写一个函数判断一个数是不是闰年？
//void IsLeap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("不是闰年\n");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	IsLeap_year(year);
//	return 0;
//}
////2.判断一个数是不是素数
////素数：只能被1和自身整除的数
//void IsPrime(int n)
//{
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			sum++;
//		}
//	}
//	if (sum == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//		printf("不是素数\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	IsPrime(num);
//	return 0;
//}

////实现一个整形有序数组的二分查找
//int BinSearch(int* arr, int left, int right, int key)
//{
//	int mid = 0; 
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)//左边找
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)//右边找
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int pos = BinSearch(arr, 0, sizeof(arr) / sizeof(arr[0]), 5);
//	printf("%d\n", pos);
//	return 0;
//}

////写一个函数实现每次调用这个函数，就会将num的值增加1
//int auto_increment(int num)
//{
//	return  ++num;
//}
//int main()
//{
//	int num = 0;
//	int result = auto_increment(num);
//	printf("%d\n", result);
//	return 0;
//}

//函数的嵌套调用
//int main()
//{
//	char ch[20] = "hello";
//	int ret = strlen(strcat(ch, "world"));
//	printf("%d\n", ret);
//	return 0;
//}

//#include "test.h"
////函数的实现
//int Add(int x, int y)
//{
//	return x + y;
//}

//递归
////接收一个整型值，按照顺序打印它的每一位
//void Print(int num)
//{
//	if (num > 9)
//	{
//		Print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int n = 1234;
//	Print(n);
//	return 0;
//}

////编写函数不允许创建临时变量求字符串的长度。
//int Length(char *str)
//{
//	//if (*str == '\0')
//	//	return 0;
//	//else 
//	//	return 1 + Length(str + 1);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "cctv-5";
//	int ret = Length(str);
//	printf("%d\n", ret);
//	return 0;
//}

//求n的介乘
int Fn(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fn(n - 1);
}