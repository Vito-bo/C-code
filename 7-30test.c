#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//面试问题：不能使用if  for 大于 等于等语句，
//比较两个数的大小。大于返回1 小于返回-1 等于返回0
int Max(int a,int b)
{
	//return a > b ? a : b;
	//10   20
	return (a-b)>>31 ? -1 : (a-b ? 1 : 0);
	//1111111111111111
	//0000000000000000
}

int main()
{
	printf("%d\n",Max(10,11));//-1
	printf("%d\n",Max(10,10));//0
	printf("%d\n",Max(21,20));//1
	/*int a = 1;
	int b = 0;
	int c = 2;
	if(a++ || b++ || c++)
	{
		printf("a = %d,%d,%d\n",a,b,c);
	}
	else
	{
		printf("a2 = %d,%d,%d\n",a,b,c);
	}*/
	//int i = 0,a=0,b=2,c =3,d=4;
	//i = a++ || ++b || d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", 
	//	a, b, c, d);// 1234    1 3 3 4   
	//printf("%d\n",i);//0     1
	return 0;
}

#if 0
void test1(int arr[])//int *arr
{
	//int len = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sizeof(arr));//(2)    4   
}
void test2(char ch[])//char *ch
{
	printf("%d\n", sizeof(ch));//(4)      4
}
int main()
{
	//float f = 13.5f;
	//int a = (int)f;

	int a = 10;
	//if( 20<=a <= 30)
	if( a >= 20 && a <= 30)
	{
		printf("hhhh");
	}
	//char *pc = (char *)&a;//int *p = &a;

	//int b = a--;//先使用  后--   
	//--a        先--  后使用
	/*int b = --a;
	printf("%d,%d\n",b,a);*/
	//int arr[10] = {0};
	//char ch[10] = {0};
	//printf("%d\n", sizeof(arr));//(1)  40
	//printf("%d\n", sizeof(ch));//(3)   10
	//test1(arr);
	//test2(ch);
	return 0;
}
//++和--运算符
//前置++和--
//前置++和--：
//#include <stdio.h>
//int main()
//{
//int a = 10;
//int x = ++a;
////先对a进行自增，然后对使用a，也就是表达式的值是a自增之后的值。x为11。
//int y = --a;
////先对a进行自减，然后对使用a，也就是表达式的值是a自减之后的值。y为10;
//return 0;
//}


//    + - * / %      因为%f去打印 整形。 00000000000。。。。。。10

int NumberOfOne(unsigned int num)//11   0000 1011
{
	int count = 0;
	while(num != 0)
	{
		if(num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	return count;
}
int NumberOf(unsigned int num)
{
	int count = 0;
	while(num != 0)
	{
		if((num & 1) != 0)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
int NumberOf1( int num)
{
	int count = 0;
	//n = n & (n-1)
	while(num != 0)
	{
		++count;
		//num = num &(num-1);
		num &= (num-1);
	}
	return count;
}

int main()
{
	int a = 10;
	a = -a;
	a = -a;
	//int *p = &a;
	//int b = 0;
	//int *pp = NULL;//'0'      '\0'      0    NULL(0)
	//int *p2;//野指针--》预防野指针的方法？面试问题。
	//printf("%d\n",*pp);


	//printf("%d\n",!!a);
	//printf("%d\n",NumberOf1(2));
	/*char ch = -1;
	printf("%d\n",ch << -1);*/
	//printf("%d\n",10%3);//1         1      1
	//printf("%d\n",-10%3);//-1     -1     -1
	//printf("%d\n",10%-3);//-1     -1      1
	//printf("%d\n",-10%-3);//1      1      -1  

	//printf("%f\n",5/2);//2      2    2.000000
	//printf("%f\n",(float)5/2);//2.5  2.50
	//printf("%f\n",5/(float)2);//2.5  2.50
	//printf("%f\n",(float)(5/2));//2  2.00
	//float num = 0.0f;
	//int i = 0;
	//for(i = 0;i < 10;i++)
	//{
	//	num = num+0.1f;
	//}

	//for(i = 0;i < 10;i++)
	//{
	//	num = num-0.1f;
	//}
	////if(num == 0.0f)
	//if(num >= -0.000001 && num <= 0.000001)
	//{
	//	printf("num == 0\n");
	//}
	//else
	//{
	//	printf("num != 0\n");
	//}
	return 0;
}
#endif