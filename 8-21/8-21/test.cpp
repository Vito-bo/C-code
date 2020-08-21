
//操作符和表达式
#include <stdio.h>
//
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	int c = a >>  1;
//
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

////位操作符 & | ^
////位操作的操作数必须是整数
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n", num1&num2);
//	printf("%d\n", num1|num2);
//	printf("%d\n", num1^num2);
//	return 0;
//}

////1.不创建临时变量，实现两个数的交换
//int main()
//{
//	int a = 2;
//	int b = 3;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//2.求一个整数存储在内存中的二进制1的个数
////方法1
//int main()
//{
//	int a = 15;
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
////方法2
//int main()
//{
//	int a = 15;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////方法3
//int main()
//{
//	int a = 15;
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a&(a - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

////赋值操作符
//int main()
//{
//	int weight = 120; //体重
//	weight = 110; //随时赋值
//	double salary = 10000.0;
//	salary = 20000.0;
//
//	int a = 10;
//	int x = 20;
//	int y = 30;
//	x = y + 1;
//	a = x;
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	x = x + 10;
//	x += 10; //复合赋值
//	return 0;
//}

////单目操作符
//int main()
//{
//	int a = -10;
//	int *p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

////逗号表达式，从左向右依次执行，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("%d\n", c);
//	return 0;
//}

////1.[]下标引用操作符
//int main()
//{
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符。
//}
////()函数调用操作符
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //实用（）作为函数调用操作符。
//	test2("hello world");//实用（）作为函数调用操作符。
//	return 0;
//}
//
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 22;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu; //结构成员访问
//
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	return 0;
//}

////整型提升
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//	return 0;
//}
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}