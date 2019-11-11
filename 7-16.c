#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
/*
sizeof : 是不是函数？  不是函数    关键字
         求字节大小的。 单位：字节
标识符：字母  数字  下划线   但是不能以数字开头
变量：

常量： 使用关键字const修饰，之后 就不能被改变 ,
           定义的同时，需要进行初始化。

合法      合理

全局变量 定义之后 如果没有赋初值，那么默认值为0;

定义局部变量之后，需要在使用之前，进行初始化。
如果没有初始化，那么默认值为：随机值  十六进制：0xcccccccc
烫烫烫烫烫烫烫烫烫烫     0xcccccccc

当全局变量和局部变量的变量名一样的时候，
优先使用局部变量。

调试：
1、打断点   F9 或者：
2、快捷键F5  或者实心三角
3、黄色箭头所指的那一行是还没有被执行的代码。、
4、F10逐过程     F11逐语句
*/
#define PI 3.14159
int main()
{
	double d = PI * PI *2;
	//char *p = "hellobit";
	//int a = 0;
	//int b = 0;
	//scanf("%d%d",&a,&b);
	////getchar();//a
	//printf("%d,%d\n",a,b);

	/*int num1 = 10;
	int num2 = 20;
	int sum = 0;
	printf("请输入两个操作数：");
	scanf("%d %d",&num1,&num1);
	sum = num1+num1;
	printf("sum = %d\n",sum);*/
	return 0;
}


#if 0
int g_val = 88;
//extern int g_val2;//extern    声明外部符号
int main()
{
	int g_val = 188;
	printf("%d\n",g_val);

	//printf("%d\n",g_val2);
	//g_val = g_val+99;
	//printf("%d\n",g_val);
	return 0;
}


void Fun()
{
	int a = 10;
}
//int g_val = 10;
int main()
{
	int local_val = 99;
	
	{
		//printf("local_val1 == %d\n",local_val);//99
		int a = 199;
		printf("local_val2 ==%d\n",a);//199
	}
	//a = 9999;

	local_val = local_val + 10;
	printf("local_val3 ==%d\n",local_val);//109

	return 0;
}



int age;//全局变量 定义之后 如果没有赋初值，那么默认值为0;
int main()
{

	/*int _____ = 99;
	int ____________________ = 99;
	printf("%d\n",____________________);*/

	/*char firstName = 'g';
	char first_Name = 'g';*/
	//const int age2 = 19;
	int a = 10;//定义局部变量之后，需要在使用之前，进行初始化。
	//printf("%d\n",age);
	printf("%d\n",a);
	//age2 = 99;

	//int 2age = 99;

	//printf("%d\n",sizeof(a));//
	//printf("%d\n",sizeof  a);//
	//printf("%d\n",sizeof(int));//
	////printf("%d\n",sizeof  int );
	return 0;
}


int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));//???????
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}
#endif
