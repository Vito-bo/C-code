
//结构体
#include <stdio.h>
#include <string.h>

////结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//typedef struct Stu
//{
//	char name[20]; //名字
//	int age;       //年龄
//	char sex[5];   //性别
//	char id[20];   //学号
//}Stu;
////结构的成员可以是标量，数组，指针，其他结构体
//
////结构体变量的定义和初始化
//struct Point
//{
//	int x;
//	int y;
//}p1;		     //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
//
////初始化:定义变量的同时赋初值
//struct Point p3 = { 1, 2 };
// 
//Stu s = { "xiaohong", 20, "男", 8848 };//初始化
//
//struct Node
//{
//	int data;
//	struct Piont p;
//	struct Node* next;
//}n1 = { 10, { 4, 5 }, NULL };			//结构体嵌套初始化
//
//struct Node n2 = { 20, { 5, 6 }, NULL };//结构体嵌套初始化

////结构成员的访问
////结构体变量访问成员，结构变量的成员是通过点操作符访问的
//struct Stu
//{
//	char name[20];
//	int age;
//};
//struct Stu s = { "zhaosi", 30 };
//int main()
//{
//	strcpy(s.name, "huahua");
//	printf("%s,%d\n", s.name, s.age); //使用.访问成员
//	return 0;
//}

////结构体指针访问指向变量的成员
//struct Stu
//{
//	char name[20]; 
//	int age;
//};
//void Pint(struct Stu* ps)
//{
//	printf("name=%s age=%d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象的成员
//	printf("name=%s age=%d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "biaozi", 40 };
//	Pint(&s); // 结构体地址传参
//	return 0;
//}

//结构体传参
struct S
{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//结构体传参
void Print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void Print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	Print1(s);
	Print2(&s);
	return 0;
}
//结构体传参的时候，要传结构体的地址
