
// 分支和循环语句
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	return 0;
//}
////如果表达式的结果为真，则执行语句
////C语言中0表示假，非0表示真
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
////适当的使用{}可以使代码的逻辑更加清楚
//
////判断一个数是否为奇数
//int main()
//{
//	//int n;
//	//scanf("%d", &n);
//	//if (n % 2 == 1)
//	//{
//	//	printf("奇数\n");
//	//}
//	//else
//	//	printf("偶数\n");
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break; 
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n", m, n);
//	return 0;
//}

//循环语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//		i = i+1;
//	}
//	return 0;
//}
//break是用于永久终止循环的。
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
////continue是用于终止本次循环的。

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	////变种1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//变种2
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("88\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i--;
//	} while (i<10);
//	return 0;
//}

////练习
////1.计算n的阶乘
//int JC(int n)
//{
//	int result = 1;
//	while (n >= 1)
//	{
//		result *= n;
//		n--;
//	}
//	return result;
//}
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum += JC(i);
//	}
//	printf("%d\n", sum);
//}
////2.折半查找法
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//找到了，返回下标
//	}
//	return -1;//找不到
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//	    mid = (left + right) / 2;
//		if (arr[mid] > key)//左边找
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)//右边找
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标是%d\n", mid);
//	else
//		printf("没找到\n");
//	return 0;
//}

////3.实现多个字符从两边向中间移动
//int main()
//{
//	char arr1[] = "welcome to shanxi";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}