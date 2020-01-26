#include<stdio.h>

#if 0
//结构体
//结构是一些值的集合，这些值称为成员变量
//结构的每个成员可以是不同类型的变量

typedef struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[20];
}Stu;
//结构的成员可以是标量，数组，指针，甚至是其他结构体
struct Stu s = { "zhangsan", 20, "man", "xian" };//初始化

struct Stu 
{ 
	char name[20];    
	int age; 
};
void print(struct Stu* ps)
{
	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
	//使用结构体指针访问指向对象的成员    
	printf("name = %s   age = %d\n", ps->name, ps->age);
}
int main()
{
	struct Stu s = { "zhangsan", 20 };
	print(&s);//结构体地址传参    
	return 0;
}
//结构体传参
struct S
{
	int data[1000];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 1000 }; 
//结构体传参 
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参 
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	//print1(s);  //传结构体    
	print2(&s); //传地址    
	return 0;
}
#endif
//结构体传参的时候，要传结构体的地址



