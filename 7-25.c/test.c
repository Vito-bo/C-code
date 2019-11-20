#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "add.h"

int Fac(int n)
{
	//return n * Fac(n-1); error
	/*if(n==1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n-1);
	}*/
}
int Age(int n)
{
	if(n == 1)
	{
		return 10;
	}
	else
	{
		return Age(n-1)+2;
	}
}
void Print(int num)//123
{
	if(num > 9)
	{
		Print(num/10);//12    12/10=1
	}
	printf("%d ",num%10);//1
}

void Reverse(int arr[],int i,int j)
{
	if(i < j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		Reverse(arr,++i,--j);
	}
}
//  A->C  A->B  C->B  A->C  B->A  B->C  A->C   7

void Move(char pos1,char pos2)
{
	printf("%c->%c\n",pos1,pos2);
}

void Hanota(int n,char pos1,char pos2,char pos3)
{
	if(n == 1)
	{
		Move(pos1,pos3);
	}
	else
	{
		Hanota(n-1,pos1,pos3,pos2);
		Move(pos1,pos3);
		Hanota(n-1,pos2,pos1,pos3);
	}
}

int main()
{
	//Hanota(1,'A','B','C');
	//printf("----------------\n");
	//Hanota(2,'A','B','C');
	//printf("----------------\n");
	Hanota(64,'A','B','C');
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	Reverse(arr,0,len-1);*/
	//printf("%d\n",Age(5));
	return 0;
}


#if 0
int main()
{
	int a = Add(10,30);
	printf("%d\n",a);
	return 0;
}

int Max2(int a,int b)
{
	return a > b ? a:b;
}

int Max3(int a,int b,int c)
{
	return  Max2(Max2(a,b),c);
}
//strcat(arr,"bit")  将"bit"拼接到arr当中
int main()
{
	char dest[20]={0};
	char *src = "hello";
	char *p = strcpy(dest,src);
	printf("%s\n",dest);
	printf("%s\n",p);
	printf("%d\n",strlen(strcpy(dest,src)));
	//char arr[20] = "hello";
	//int ret = strlen(strcat(arr,"bit"));//这里介绍一下strlen函数
	//printf("%d\n", ret);
	return 0;


	/*int ret = Max3(10,20,30);
	printf("%d\n",ret);*/
	return 0;
}

void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for(i=0; i<3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}


/*
4.
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。
*/
void Init(int arr[],int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		arr[i] = i;
	}
}
void Empty(int arr[],int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int arr[],int len)
{
	int left = 0;
	int right = len-1;
	while(left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
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
	int arr[10];
	int len = sizeof(arr)/sizeof(arr[0]);
	Init(arr,len);
	Show(arr,len);
	Reverse(arr,len);
	Show(arr,len);
	return 0;
}


/*
1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
n*n
*/
void Muti(int n)
{
	int i = 0;
	int j = 0;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
}

int main()
{
	/*int input = 0;
	scanf("%d",&input);*/
	Muti(5);
	printf("++++++++\n");
	Muti(6);
	printf("++++++++\n");
	Muti(7);
	printf("++++++++\n");
	Muti(9);
	return 0;
}
#endif