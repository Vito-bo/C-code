#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 


/*
一：笔试问题：枚举   define 定义常量  有什么区别？
1、#define 定义的常量  不可以进行调试 
2、define定义的标识符常量不具有类型   枚举具有类型

项目：枚举会    列举消息的类型

二：字符串 
  1、打印字符串使用格式化输出%s.需要注意：%s打印的时候
  工作原理：遇到\0停止打印。

  2、strlen();  用来求字符串的长度:当前字符串中字符的个数
  工作原理：遇到\0停止

*/
#if 0
int main()
{
	int year = 0;
	for(year = 1000; year <= 2019; year++)
	{
		//1、能被4整除但是不能被100整除
		//2、能被400整除
		if((year%4 == 0 && year%100 != 0)  || (year % 400 == 0) )
		{
			printf("%d\n",year);
		}
	}
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for(i = 1;i <= 9;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//8   
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//计数
	for(i = 101;i <= 200;i += 2)// i = 5
	{
		for(j = 2;j <= sqrt((double)i);j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//跳出当前循环
			}
		}
		if(j > sqrt((double)i)) //是素数
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}
//
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//计数
	for(i = 100;i <= 200;i++)// i = 5
	{
		for(j = 2;j <= i/2;j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//跳出当前循环
			}
		}
		if(j > i/2) //是素数
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}
//试除法
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//计数
	for(i = 100;i <= 200;i++)// i = 5
	{
		for(j = 2;j < i;j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//跳出当前循环
			}
		}
		if(j == i) //是素数
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}

//转义字符
int main()
{

	//printf("%d\n",strlen("c:\e") );
	//printf("%s\n","c:\est");

	//char *str1 = "hello";
	//printf("%d\n",strlen(str1));//这是求字符串长度的
	/*printf("%d\n", strlen("c:\est"));*/
	//printf("%c\n",'\32');
	//printf("%d\n",'\x123');
	return 0;
}
//
int main()
{
	printf("你们好帅好可爱");
	printf("\r");
	printf("你们真的好帅好可爱\n");
	/*printf("%s\n","\"hello\"");
	printf("%s\n","c:\\code\\test.c");
	printf("%s\n"," \' ");*/
	return 0;
}
int main()
{
	//字符串    他是由双引号引起来的一串内容，
	//并且是以\0结尾   标志：结束的标志
	char *str1 = "hello";

	//str2 是一个字符数组   
	char str2[] = "bit";
	//字符数组
	char str3[4] = {'a','b','c','d'};
	char ch2 = 'g';

	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	return 0;
}
enum Day
{
	MON = 1,
	THU = 4,
	WED
	//......
};
int main()
{
	//int a = 10;
	//Day day = 1;
	//Day day2 = MON;
	/*printf("%d\n",MON);
	printf("%d\n",THU);
	printf("%d\n",WED);*/
	//const int a = 10;
	//printf("%d\n",SIZE);
	return 0;
}
#endif

