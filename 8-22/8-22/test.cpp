
//指针--》指针就是变量，用来存放地址的变量
#include<stdio.h>
//
//int main()
//{
//	//int a = 10;//在内存中开辟一块空间
//	//int *p = &a;//对变量a，取出它的地址，使用&操作符
//	//			//将a的地址存放在p变量中，p就是一个指针变量
//	
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	//指针的类型决定了指针向前或者向后走一步有多大（距离）
//	return 0;
//}
//
//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];
//	float *vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}
//
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}

////指针和数组
////数组名表示的是数组首元素的地址
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

