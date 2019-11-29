#include<stdio.h>
#include<string.h>

#if 0
//声明一个结构体类型
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};

//定义结构体类型变量
//1.先声明结构体类型，再定义该类型的变量
struct Student student1, student2;
// 结构体类型名     结构体变量名
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};


//2.在声明类型的同时定义变量名
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}student1, student2;

//3.不指定类型名而直接定义结构体类型变量

struct
{
	成员列表;
}变量名列表;


//结构体变量的初始化和引用
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[30];
	}a = {0303,"vitobo",'M',"113,xian lintong"};
	printf("NO:%ld\nname:%s\nsex:%c\nadder:%s\n", a.num, a.name, a.sex, a.addr);
	return 0;
}

//输入两个学生的学号，姓名和成绩，输出成绩较高的学生的学号，姓名和成绩

int main()
{
	struct Student//声明结构体类型
	{
		int num;
		char name[20];
		float score;
	}student1,student2;//定义两个结构体变量
	scanf("%d%s%f", &student1.num, student1.name, &student1.score);
	scanf("%d%s%f", &student2.num, student2.name, &student2.score);
	printf("The highter score is:\n");
	if (student1.score > student2.score)
	{
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	}
	else if (student1.score < student2.score)
	{
		printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
	}
	else
	{
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
		printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
	}

	return 0;
}
//注意：在scanf函数中在成员student1.num和student1.score的前面都有取地址符&，而在student1.name前面没有&
//这是因为name是数组名，本身就代表地址，故不能再画蛇添足的再加一个&

#endif

// 使用结构体数组
//例：有3个候选人，每个选民只能投一票。编写一个统计选票的程序。
//先输入被选人的名字，最后输出各人得票结果

struct Person
{
	char name[20];    //候选人姓名
	int count;        //候选人得票数
}leader[3] = {"wang",0,"gao",0,"zhou",0};//定义结构体数组并初始化

int main()
{
	int i, j;
	char leader_name[20];//定义字符数组
	for (i = 1; i <= 10; i++)
	{
		scanf("%s", leader_name);//输入所选的候选人姓名
		for (j = 0; j < 3; j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}
	printf("\nResult:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
