
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#if 0
void GetMemory(char* p)
//void GetMemory(char** p)
{
	p = (char *)malloc(100);
	//*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(str);
	//GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	Test();  //程序崩溃
	return 0;
}

//题目2

//动态内存分配在堆上
//系统对越界的检查是抽查
//栈帧里面用来存放函数的局部变量
char *GetMemory(void) 
{ 
	//char p[] = "hello world"; //栈
	//static char p[] = "hello world";//静态区
	//char* p = "hello world";//常量区
	
	char* p = (char*)malloc(12);//堆上
	strcpy(p, "hello world");

	return p; //数组名代表数组首元素的地址
}

void Test(void) 
{
	char *str = NULL;    
	str = GetMemory();    
	printf("%s\n",str); 

	free(str);
}
int main()
{
	Test();  //输出随机值
	return 0;
}


//题目3
void GetMemory(char **p, int num) 
{ 
	*p = (char *)malloc(num); 
} 
void Test(void) 
{ 
	char *str = NULL;    
	GetMemory(&str, 100);    
	strcpy(str, "hello");    
	printf(str); 
}
int main()
{
	Test();  //输出 hello
	return 0;
}

//题目3
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str); //free是把空间的使用权还给系统，并不是销毁空间
	//str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test(); //输出 world
	return 0;
}


//柔性数组  C99
//结构中的最后一个元素允许是未知大小的数组

//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;

//结构中的柔性数组成员前面必须至少一个其他成员。 
//sizeof 返回的这种结构大小不包括柔性数组的内存。 
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，
//并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。


typedef struct st_type
{
	int i;
	int a[];//柔性数组成员
}type_a;

int main()
{
	printf("%d\n", sizeof(type_a));
	return 0;
}
#endif




