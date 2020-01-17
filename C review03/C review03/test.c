#include<stdio.h>


#if 0
//函数——》子程序

//C语言常用的库函数
//IO函数 字符串操作函数 字符操作函数 内存操作函数 时间/日期函数 数学函数
//使用库函数，必须包含#include对应的头文件


//自定义函数
//ret_type fun_name(paral, *)
//{
//	statement;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//paral    函数参数

int Max(int x, int y)
{
	return (x > y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 2;
	int b = 3;
	Swap1(a, b);
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
//函数的嵌套调用
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i<3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}

//函数的链式访问
//把一个函数的返回值作为另一个函数的参数
#include <string.h>
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "world"));
	printf("%d\n", ret);
	return 0;
}

int main()
{
	printf("%d\n", printf("%d", printf("%d", 43)));
	return 0;
}
//printf使用不当，造成了栈溢出。
//你换成一位数，后面的为你给的数字+1，两位数为你给的数字+21，三位数为你给的数字+31，依次类推。

//函数的声明和定义
//函数的声明-》告诉编译器有一个函数叫什么，参数是什么，返回类型是什么
//函数的定义-》是指函数的具体实现，交代函数的功能实现

//头文件test.h放置函数的声明
#ifndef __TEST_H__ 
#define __TEST_H__ 
//函数的声明 
int Add(int x, int y); 
#endif //__TEST_H__

//源文件test.c放置函数的实现
#include "test.h" 
//函数Add的实现 
int Add(int x, int y) 
{    
	return x+y; 
} 

//函数的递归
//程序调用自身的编程技巧称为 递归

//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件

void print(int n) 
{ 
	if (n>9)    
	{ 
		print(n / 10); 
	}    
	printf("%d ", n % 10); 
} 
int main() 
{ 
	int num = 1234;    
	print(num);    
	return 0; 
}
#endif


























































