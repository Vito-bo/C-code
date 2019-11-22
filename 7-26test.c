#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
1、如果数组没有初始化，那么默认值为随机值。(局部数组)
2、数组，结构体...  聚合类型。整体赋值，只有一次机会，
		就是在初始化的同时。
3、局部的数组，是在什么时候确定大小的？编译的时候
						  什么时候分配内存？          运行
						  最大分配多大内存？          1M/2M  栈的大小
4、[常量]
*/
#define SIZE 10
int main()
{
	//const int a  =10;//常变量
	int arr1[10] = {1,2,3,45,5};
	//int arr2[SIZE] = {1,2};//8-->0

	printf("hello\n");
	//arr[1] = 2;
	//数组的整体赋值，只有一次机会，就是在初始化的同时
	//arr = {11,12,13,14,15,16,17,18,19,20};
	//int arr2[10];
	//arr2 = arr; error
	return 0;
}




#if 0
//2.编写一个函数实现n^k，使用递归实现
//2^5->   2*2^4 ->  2*2*2^3->2*2*2*2^2->2*2*2*2*2^1
//->2*2*2*2*2*2^0  
int MyPow(int n,int k)
{
	if(k == 0)
	{
		return 1;
	}
	return n * MyPow(n,k-1);
}
/*
3. 写一个递归函数DigitSum(n)，输入一个非负整数，
返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，
它的和是19
1729
1729%10 = 9;
*/
int DigitSum(unsigned int n)
{
	if(n > 9)
	{
		return DigitSum(n/10) + n%10;
	}
	return n;
}
/**
4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
int MyStrlen(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;//1 
		str++;//str = str+1;
		//str+1;
	}
	return count;
}
void ReverseString(char * str)
{
	int len = MyStrlen(str);
	char tmp = *str;
	*str = *(str+len-1);
	*(str+len-1) = '\0';
	if(MyStrlen(str+1) >= 2)
	{
		ReverseString(str+1);
	}
	*(str+len-1) = tmp;
}
int main()
{
	char str[] = "abcdef";
	ReverseString(str);
	printf("%s\n",str);

	/*int ret = DigitSum(2729);
	printf("%d\n",ret);*/
	return 0;
}


int MyStrlen(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;//1 
		str++;//str = str+1;
		//str+1;
	}
	return count;
}
int MyStrlen2(char *str)
{
	if(*str == '\0')
	{
		return 0;
	}
	return 1+strlen(str+1);
}
int count = 0;
int Fabonaci1(int n)
{
	if(n==1 || n == 2)
	{
		return 1;
	}
	if(n == 3)
	{
		count++;
	}
	return Fabonaci1(n-1)  + Fabonaci1(n-2);
}
int Fabonaci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;//！！！！！！！！！！！
	int i = 0;
	for(i = 3;i <= n;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int JumpFloor1(int n)
{
	if(n == 1)
	{
		return 1;
	}
	if(n == 2)
	{
		return 2;
	}
	return JumpFloor1(n-1) + JumpFloor1(n-2);
}
int JumpFloor(int n)
{
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	int i = 0;
	if(n == 1)
	{
		return f1;
	}
	if(n == 2)
	{
		return f2;
	}
	for(i = 3;i <= n;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	//int ret = Fabonaci(2);
	/*printf("%d\n",Fabonaci(1));
	printf("%d\n",Fabonaci(2));
	printf("%d\n",Fabonaci(3));*/
	printf("%d\n",JumpFloor(3));
	//printf("count = %d\n",count);
	//char *p = "hello";//字符串   "bit"
	//int len = MyStrlen2(p);
	//printf("%d\n",len);
	return 0;
}
#endif