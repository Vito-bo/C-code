
//指针的进阶
#include <stdio.h>
#include<stdlib.h>
////1.字符指针
//int main()
//{
//	/*char ch = 'w';
//	char *pc = &ch;
//	*pc = 'm';
//	printf("%c\n", ch);*/
//	char *pstr = "hello world";//把一个常量字符串的首字符的地址存放到指针变量pstr中
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char *str3 = "hello world";
//	char *str4 = "hello world";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

////指针数组
//int main()
//{
//	int *arr1[10]; //整形指针的数组
//	char *arr2[5]; //一级字符指针的数组
//	char **arr3[5];//二级字符指针的数组
//
//	return 0;
//}
//
////数组指针
//int main()
//{
//	int(*p)[10];
//	//P先和*结合，p是一个指针变量，指向的是一个大小为10个整型的数组。
//	//所以p是一个指向数组的指针
//	return 0;
//}
//
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//数组参数，指针参数
////一维数组传参
////void test(int arr[])
////{}
////void test(int arr[10])
////{}
////void test(int *arr)
////{}
//void test2(int *arr[20])
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	//test(arr);
//	test2(arr2);
//	return 0;
//}

////二维数组传参
//void test1(int arr[3][5])//ok？
//{}
//void test2(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test3(int *arr)//no 类型不匹配
//{}
//void test4(int* arr[5])//no 类型不匹配
//{}
//void test5(int(*arr)[5])//ok
//{}
//void test6(int **arr)//no 数组指针与 二级指针不兼容
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test6(arr);
//	return 0;
//}

////一级指针传参
//void Printf(int *p, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	int *p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	Printf(p, len);
//	return 0;
//}

////二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test()
//{
//	printf("hi");
//}
//void(*p)(test);//函数指针,保存函数test()的地址
//
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", p);
//	return 0;
//}

////函数指针
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//void(*signal(int, void(*)(int)))(int);
//
//typedef void(*p)(int);
//p signal(int, p);

////函数指针数组
////把函数的地址存放到一个数组中，那这个数组就叫做 函数指针数组
//void(*arr[5])();
//
//////函数指数组的用途：转移表
////计算器
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("************************\n");
//		printf("  1:add          2:sub  \n");
//		printf("  3:mul          4:div  \n");
//		printf("************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret=%d\n", ret);
//			break; 
//		case 3:
//			printf("输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret=%d\n", ret);
//			break; 
//		case 4:
//			printf("输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//		    printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////使用函数指针数组实现：
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div };//转移表
//	while (input)
//	{
//		printf("*******************\n");
//		printf("  1:add     2:sub  \n");
//		printf("  3:mul     4:div  \n");
//		printf("*******************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret=%d\n", ret);
//	}
//	return 0;
//}
////指向函数指针数组的指针
////指针指向一个数组，数组的元素都是 函数指针
//void test(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针
//	void(*p)(const char*) = test;
//	//函数指针的数组arr
//	void(*arr[5])(const char* str);
//	arr[0] = test;
//	//指向函数指针数组arr的指针parr
//	void(*(*parr)[10])(const char*) = *arr;
//}

////回调函数--通过函数指针调用的函数
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 7, 3, 5, 9, 2, 4, 8, 6, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

int int_cmp(const void* p1, const void* p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void _swap(void *p1, void *p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char*)base + (j + 1)*size)>0)
			{
				_swap((char*)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}