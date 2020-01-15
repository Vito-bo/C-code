
#include <stdio.h>
#include <string.h>

//数据在内存中的存储

//类型的意义
//1.使用这个类型开辟内存空间的大小（大小决定了使用范围）

//类型的基本归类
//整形家族 char short int long 
//浮点型家族 float double
//构造类型 数组类型 结构体类型struct 枚举类型enum 联合类型union
//指针类型 int* pi; char* pc; float* pf; void* pv;
//空类型 void

//正数的原，反，补码都相同
//对于整形来说，数据存放内存中其实存放的是补码


#if 0

//判断当前机器的字节序

int check_sys1()
{
	int i = 1;
	return (*(char*)&i);
}

//代码2
int check_sys2()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	int ret = check_sys2();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}

int main()
{
	char a = -128;
	printf("%u\n", a);
	return 0;
}
int main()
{
	char a = 128;
	printf("%u\n", a);
	return 0;
}
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j); //-10
	return 0;
}

int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}
#endif
int main()
{
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}































