
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}

//int global = 2020; //全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2021;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//// 常量和变量
//// 括号中的都是枚举常量
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	100;//字面常量
//	const float f = 3.14f; //const 修饰的常量
//	//f = 2.5;
//	#define M 1000; //#define的标识符常量
//	return 0;
//}

//// 字符串
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h', 'e', 'l', 'l', 'o'};
//	char arr3[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//// 转义字符
//int main()
//{
//	//printf("c:\\code\\test.c\n");
//	//printf("\\a");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof("abcdef"));
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

////static修饰局部变量
////代码1
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//// 代码2
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////static修饰局部变量改变了变量的生命周期，让静态局部变量出了作用域依然存在，直到程序结束生命周期才结束。

////define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//// 指针
//////内存
////int main()
////{
////	int num = 10;
////	&num;//取出num的地址
////	printf("%p\n", &num);//打印地址，%p--以地址的形式打印
////	return 0;
////}
//
////int main()
////{
////	//int num = 10;
////	//int *p = &num;
////	//*p = 20;
////	//printf("%d\n", num);
////	char ch = 'w';
////	char* pc = &ch;
////	*pc = 'q';
////	printf("%c\n", ch);
////	return 0;
////}
//
////指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//

//结构体
struct Stu
{
	char name[10]; //名字
	int age;       //年龄
	char sex[5];   //性别
	char id[10];   //学号
};
int main()
{
	struct Stu s = { "张三", 20, "男", "20180101" };
	//.为结构成员访问操作符
	printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
	//->操作符
	struct Stu *ps = &s;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);

}