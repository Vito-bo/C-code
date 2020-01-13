
#include <stdio.h>
#include <string.h>

#if 0
//int global = 2019;//全局变量
//int main()
//{
	//printf("hello world\n");

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//printf("%d\n", sizeof(long double));


	//int local = 2018;//局部变量
	//int global = 2020;//局部变量
	//printf("global=%d\n", global);
	//当局部变量和全局变量同名时，局部变量优先使用


	//return 0;
//}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个操作数：>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);	
	return 0;
}


enum Sex
{
	name,
	sex,
	num,
	address
};

int main()
{
	3.14;
	1000;//字面常量
	const float pai = 3.14f;//const修饰的常量
	
#define MAX 100 //#define的标识符常量
	return 0;
}

int main()
{
	char ch1[] = "bit";
	char ch2[] = { 'b', 'i', 't' };
	char ch3[] = { 'w', 't', 'o', '\0' }; 
	printf("%s\n", ch1);
	printf("%s\n", ch2);
	printf("%s\n", ch3);
	return 0;
}

int main()
{
	//问题1：在屏幕上打印一个单引号'，怎么做？    
	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？    
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}

int main()
{
	printf("%d\n", strlen("abcdef"));
	// \32被解析成一个转义字符    
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}


int Add(int x, int y)
{
	return x + y;
}
/*C语言风格注释
int Sub(int x, int y)
{    
return x-y;
} */

int main()
{
	//C++注释风格    
	//int a = 10;    
	//调用Add函数，完成加法    
	printf("%d\n", Add(1, 2));
	return 0;
}

// 选择语句
int main()
{
	int coding = 0;
	printf("你会好好学习吗？（选择1or0）:》");
	scanf("%d", &coding);
	if (coding = 1)
	{
		printf("坚持，你会有好offer\n");
	}
	else
	{
		printf("放弃，回家卖红薯\n");
	}
	return 0;
}

//循环语句
int main()
{
	printf("考入好大学\n");
	int line = 0;
	while (line <= 20000)
	{
		line++;
		printf("我要继续努力敲代码\n");
	}
	if (line > 20000)
	{
		printf("迎娶白富美\n");
	}
	return 0;
}


//函数，简化代码，代码复用
int Min(int x,int y)
{
	x < y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = Min(a, b);
	printf("%d\n", c);
}

// 数组，一组相同类型元素的集合
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


void test()
{
	int i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i<10; i++)
	{
		test();
	}
	return 0;
}


void test()
{
	//static修饰局部变量    
	static int i = 0;
	i++;
	printf("%d ", i);
} 
int main()
{
	int i;
	for (i = 0; i<10; i++)
	{
		test();
	}
	return 0;
}
//static修饰局部变量改变了变量的生命周期，让静态局部变量出了作用域依然存在，
//到程序结束生命周期才结束。


//static修饰全局变量
//代码1 
//add.c 
int g_val = 2018; 
//test.c 
int main() 
{    
	printf("%d\n", g_val);    
	return 0; 
}

//代码2 
//add.c 
static int g_val = 2018; 
//test.c 
int main() 
{    
	printf("%d\n", g_val);    
	return 0; 
}
//一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用
//不能在其他源文件内使用


//static修饰函数
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}
static int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}
//代码1正常，代码2在编译的时候会出现连接性错误.
//一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用。


//#define 定义常量和宏
//define定义标识符常量 
#define MAX 1000 
//define定义宏 
#define ADD(x, y) ((x)+(y))
#include <stdio.h>
int main()
{
	int sum = ADD(2, 3);
	printf("sum = %d\n", sum);
	sum = MAX * ADD(2, 3);
	printf("sum = %d\n", sum);
	return 0;
}

int main()
{
	int num = 10;
	&num;//取出num的地址
	printf("%p\n", &num);
	return 0;
}
//指针的应用
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	printf("%c\n", ch);
	return 0;
}

//指针变量的大小
int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *));
	return 0;
}
//指针大小在32位平台是4个字节，64位平台是8个字节
#endif

//结构体
struct Stu
{
	char name[20];//名字    
	int age;//年龄    
	char sex[5];//性别    
	char id[15];//学号 
};
//结构体的初始化
int main()
{
	struct Stu s = { "宁波", 22, "man", "20201010" };
	//.为结构体成员访问操作符
    printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
	struct Stu *ps = &s; 
	//->操作符
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
}


