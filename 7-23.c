#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
参数：
       1、个数匹配
	   2、参数的类型
返回值：
		如果有返回值，必须返回一个值。否则会有警告.
		        返回值的类型也需要匹配
		如果没有返回值void （无返回值类型）
函数名：
		C：建议：函数名遵循驼峰式命名FirstName  _ 

	形参的改变 不会影响实参的改变(按值传递)
*/
//返回1代表是素数  0代表不是素数  
//尽量避免在子函数中打印.
int IsPrime(int n)
{
	int i = 0;
	for(i = 2;i < n;i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int YearLeap(int i)
{
	if ( (i % 400 == 0 )|| (i % 4 == 0 && i % 100 != 0))
	{
		return 1;
	}
	else
	{
			return 0;
	}
}
void Inc(int *p)
{
	//(*p)++;
	*p = *p+1;
}
int main()
{
	int num = 0;
	int i = 0;
	for(i = 0;i < 5;i++)
	{
		Inc(&num);
	}
	printf("%d\n",num);
	/*int i =0 ;
	for(i = 1000;i <= 2000;i++)
	{
		if(YearLeap(i) == 1)
		{
			printf("is YearLeap %d\n",i);
		}
	}*/

	/*int ret = IsPrime(10);
	if(ret == 1)
	{
		printf("is prime\n");
	}
	else
	{
		printf("is not prime\n");
	}*/
	return 0;
}

#if 0
void Swap(int x,int y)//形式参数  形参
{
	int tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int *px,int *py)//形式参数  形参
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;//实际参数--》   实参
	int b = 20;
	Swap2(&a,&b);//按址传递
	Swap(1,2+3);//按址传递
	Swap(a+2,b);//按址传递
	printf("%d,%d\n",a,b);
	return 0;
}

int Max(int a,int b)
{
	return a > b ? a:b;
}
double Function()
{
	double d = 12.5;
	printf("is Function\n");
	return d;
}
int main()
{
	int x = 10;
	int y = 20;
	//Max(x,y);
	Function();
	return 0;
}


int main()
{
	/*char strdest[20] = {0};
	char src[10] = "abcdef";
	char *p = strcpy(strdest,src);
	printf("%s\n",strdest);
	printf("%s\n",p);*/
	char dest[10] = "abcdef";
	//void *memset( void *dest, int c, size_t count );
	//count:字节为单位
	//memset(dest,'g',4);
	char *p = (char *)memset(dest,'g',4);//void *
	printf("%s\n",p);
	return 0;
}


#include <Windows.h>
int main()
{
	char arr1[] = "welcome to bit!";
	char arr2[] = "###############";
	int left = 0;
	int right = strlen(arr1)-1;
	while(left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n",arr2);
	}
	return 0;
}


/*
123ABCD45efG ==> abcdEFg
编写一个程序，可以一直接收键盘字符，
如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，
如果是数字不输出。
*/
int main()
{
	int ch = 0;
	while( (ch = getchar()) != EOF)
	{
		if(ch >= 'a' && ch <= 'z')
		{
			putchar(ch-32);
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			putchar(ch+32);
		}
		else if(ch >= '0' && ch <= '9')
		{

		}
	}
	return 0;
}


void Menu()
{
	printf("******欢迎来到猜数字游戏********\n");
	printf("******         1.play      ************\n");
	printf("******         0.exit       ************\n");
	printf("**********************************\n");
}
void Game()
{
	//printf("这是玩游戏的逻辑代码\n");
	//rand()%100-->[0-100)    rand()%100+1->[1-100]
	int randNum = rand()%100+1;//随机数 0 - 32767
	int num = 0;
	//printf("randNum==%d\n",randNum);
	while(1)
	{
		printf("请输入你要猜的数字-》");
		scanf("%d",&num);
		if(num > randNum)
		{
			printf("猜大了\n");
		}
		else if(num < randNum)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
int main()
{
	//void srand( unsigned int seed );
	
	//Gets the system time. 1970.1.1- 
	//time_t time( time_t *timer );

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请输入你的操作：》");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的操作数\n");
			break;
		}
	}while(input);
	return 0;
}
#endif