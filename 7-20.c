#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 10
#include<stdio.h>


#if 0
int main()
{
	int arr[10] = {0};
	int a = 10;//空语句
	printf("%d\n",a);
	return 0;
}


void Swap(int *p,int *q)
{
	int tmp = *q;
	*q  = *p;
	*p = tmp;
}

void Show(int arr[],int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = {0};
	int arr2[10] = {0};
	int len = sizeof(arr1)/sizeof(arr1[0]);
	int i = 0;
	//开始输入数据
	for(i = 0;i < len;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i = 0;i < len;i++)
	{
		scanf("%d",&arr2[i]);
	}
	//开始交换数据
	for(i = 0;i < len;i++)
	{
		/*int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;*/
		Swap(&arr1[i],&arr2[i]);
	}
	//打印数组
	Show(arr1,len);
	Show(arr2,len);
	/*for(i = 0;i < len;i++)
	{
		printf("%d ",arr1[i]);
	}

	for(i = 0;i < len;i++)
	{
		printf("%d ",arr2[i]);
	}*/

	return 0;
}




/*
结构体：一种类型  ,聚合类型      数组
特征：对他进行整体初始化，只有一次机会，在定义的同时。
struct Tag
{
    成员列表；
};
//一个汉字--》两个字节
*/
typedef struct Student
{
	char name[20];
	char sex[4];
	int age;
}stu3;
//stu2= {"gaobo","男",18}
int main()
{
	struct Student stu1 = {"zhansan","男",18} ;
	//printf("%s,%s,%d\n",stu1.name,stu1.sex,stu1.age);
	//stu2 = {"gaobo","男",18};errror 
	//int a = 10;
	//int arr[10] = {1,2,3,4,5,5,6,7,8,10};
	stu3 st = {"xulei","nv",25};
	return 0;
}



//任何类型的指针 大小都为4
//指针变量里面 存放的就是地址 int a = 10;
//int  *p= &a; 十六进制的数字   4   32位下    但是在64位下 8
//int ** pp = &p;
int main()
{
	printf("%d\n",sizeof(int **));//4
	printf("%d\n",sizeof(char *));//1-》4
	printf("%d\n",sizeof(double *));//8-》4
	printf("%d\n",sizeof(short *));//2-》4
	return 0;
}


void Swap1(int a,int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
//可以进行交换的
void Swap(int *p,int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

void Swap2(int *p,int *q)
{
	int *tmp = p;
	p =q;
	q = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n",a,b);
	//Swap(a,b);
	Swap2(&a,&b);
	printf("%d,%d\n",a,b);
	return 0;
}


//widows + r  ->calc
int main()
{
	int a = 10;
	int *p = &a;
	*p = 88;
	/*printf("%d\n",a);
	printf("%d\n",*p);*/
	int **pp= &p;
	**pp = 99;

	//地址存放在对应类型的指针当中

	//printf("%p\n",&a);//打印变量的地址 十六进制显示
	//printf("%d\n",&a);//每次运行程序,变量的地址是不确定的
	return 0;
}


#define SIZE 10
#define STR  "hello"
//#define LOOP for(;;){printf("hellobit\n");}
#define LOOP for(   ;  ;   )\
	{\
		printf("hellobit\n");\
	}
//续行符
//定义了一个标识符常量

#define ADD(x,y)  ((x)+(y))
//定义一个宏 --》宏是有参数的   是有副作用的？？？  
//注意问题:
#define MUL(x,y)  ((x)*(y))
int Add(int a,int b)
{
	return a+b;
}

int main()
{
	int result = MUL(10+9,20);//19 * 20 = 380
	//                10+ 9 *  20   190
	printf("%d\n",result);
	//int result = 2 * ADD(10,20);//= x+y  = 10+20
	////                2 * 10+20
	//printf("%d\n",result);

	/*int result = Add(10,20);
	printf("%d\n",result);*/
	/*for(   ;  ;   )
	{
		printf("hellobit\n");
	}*/
	//LOOP

	/*int a = SIZE;
	printf("%d\n",a);
	printf("%s\n",STR);*/
	return 0;
}
#endif

