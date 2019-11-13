#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>

/*
break :结束所有的循环
continue :代表结束本趟循环

goto：跳转到某一条标签标识的语句 

typedef  : 类型重命名    复杂的类型

面试问题：
typedef   #define 的区别是什么？

加上typedef  他就会由变量变为对应的类型

static:
      修饰局部变量-》提升局部变量的生存周期
	  修饰全局变量-》作用域被限制了-》被限制到当前的源文件中
	  修饰函数-》作用域被限制了-》被限制到当前的源文件中

C语言函数传递值的方式：
                按值传递                     按址传递

*/
#if 0
int  main()
{
	int a = 18;
	int b = 24;
	int c = 0;
	while((a % b) != 0)
	{
		c = a %b;//18%24=18
		a = b;//a = 24
		b = c;//b = 18
	}
	printf("%d\n",c);
	return 0;
}

// 将三个数按从大到小输出。a   b   c
int main()
{
	int a = 10;
	int b = 9;
	int c = 30;
	int tmp= 0;
	if(a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}//a >= b
	if(a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}//a >= c
	if( b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}//b >= c
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}

int main()
{

	int arr[10] = {9,21,3,14,5,6,71,8,19,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	int i = 0;
	for(i = 1;i < len;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);
	/*int a1 = 1;

	int a2 = 2;*/
	return 0;
}
int main()
{
	int a = 6;//0000 0110
	int b = 4;//0000 0100

	a = a ^ b;//a = 0000 0010     2
	b = a ^ b;//0000 0110    b = 6
	a = a ^ b;//4           a = 4;

	return 0;
}


int main()
{
	int a = 2147483647;
	int b = 2;
	a = a+b;//a = 10+20=30
	b = a-b;//30-20 = 10;   b = 10 
	a = a-b;//30-10=20   a = 20
	printf("%d,%d\n",a,b);
	return 0;
}


//(按值传递)形参的改变 不影响实参的值
void Swap(int x,int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("%d,%d\n",a,b);
	Swap(a,b);
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("%d,%d\n",a,b);
	return 0;
}




//声明外部的g_val
//extern int g_val;
extern void Show();
int main()
{
	//printf("%d\n",g_val);
	Show();
	return 0;
}



void Test()
{
	static int c = 0;//static
	c++;
	printf("%d\n",c);//1  2
}

int main()
{
	int i = 0;
	for(i = 0;i < 5;i++)
	{
		Test();
	}
	return 0;
}

typedef unsigned int u_int;
typedef int Arr[10];//  int[10]    Arr

//#define   u_int2  unsigned int 
#define SIZE 10
int main()
{
	Arr arr = {1,2,3,4,5,6,7,8,9,10};
	//int a  =10;
	//register int a = 10;//建议编译器把a放到寄存器
	//int c = 9;
	//int y = 10;
	//u_int x = 99;
	//u_int2 z = 100;
	//printf("%u\n",z);

//gaobo://标签
//	printf("hello");
//bit:
//	goto gaobo;
//	goto bit;
//
	return 0;
}


int main()
{
	int i = 0;
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default://默认情况下
		printf("0\n");
		break;
	}
	return 0;
}


int main()
{
	int i = 0;
	for(i = 0;i < 4;i++)
	{
		if(i == 1)
		{
			continue;
		}
		printf("HELLO\n");
	}
	return 0;
}
#endif