
// ����

//C���Գ��ÿ⺯����IO����/�ַ�����������/�ַ���������/�ڴ��������
//ʱ��/���ں���/��ѧ����
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

////��ϰ
////1.дһ�������ж�һ�����ǲ������ꣿ
//void IsLeap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	IsLeap_year(year);
//	return 0;
//}
////2.�ж�һ�����ǲ�������
////������ֻ�ܱ�1��������������
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
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	IsPrime(num);
//	return 0;
//}

////ʵ��һ��������������Ķ��ֲ���
//int BinSearch(int* arr, int left, int right, int key)
//{
//	int mid = 0; 
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)//�����
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)//�ұ���
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

////дһ������ʵ��ÿ�ε�������������ͻὫnum��ֵ����1
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

//������Ƕ�׵���
//int main()
//{
//	char ch[20] = "hello";
//	int ret = strlen(strcat(ch, "world"));
//	printf("%d\n", ret);
//	return 0;
//}

//#include "test.h"
////������ʵ��
//int Add(int x, int y)
//{
//	return x + y;
//}

//�ݹ�
////����һ������ֵ������˳���ӡ����ÿһλ
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

////��д��������������ʱ�������ַ����ĳ��ȡ�
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

//��n�Ľ��
int Fn(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fn(n - 1);
}