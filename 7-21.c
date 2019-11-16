#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	//int i = 0;
	//for(i = 1;i < 100;i++)
	//{
	//	printf("%d ",i);
	//}
	//printf("\n");

	/*int i = 1;
	while(i < 100)
	{
			printf("%d ",i);
			i++;
	}
	printf("\n");*/
	
	int i = 1;
	do
	{
		printf("%d ",i);
		i++;
	}while(i < 0);//至少会执行一次语句块

	return 0;
}


#if 0
/**
使用 while(  )    for(   )       do{循环体}while( );  
分别求  1-100奇数的和  偶数的和  整体的和
*/
int main()
{
	int sum = 0;
	int sumOdd = 0;
	int sumEve = 0;
	
	int i = 1;
	do
	{
		sum += i;
		i++;
	}while(i <= 100);

	i = 1;
	do
	{
		sumOdd += i;//奇数
		i+=2;
	}while(i <= 100);

	i = 2;
	do
	{
		sumEve += i;//偶数
		i+=2;
	}while(i <= 100);
	printf("%d,%d,%d\n",sum,sumOdd,sumEve);
	return 0;
}

int main()
{
	int sum = 0;
	int sumOdd = 0;
	int sumEve = 0;
	int i = 1;
	while(i <= 100)
	{
		sum += i;
		i++;
	}
	i = 1;
	while(i <= 100)
	{
		sumOdd += i;//奇数
		i+=2;
	}
	i = 2;
	while( i <= 100)
	{
		sumEve += i;//偶数
		i+=2;
	}
	printf("%d,%d,%d\n",sum,sumOdd,sumEve);
	return 0;
}



int main()
{
	int sum = 0;
	int sumOdd = 0;
	int sumEve = 0;
	int i = 0;
	for(i = 1;i <= 100;i++)
	{
		sum += i;
	}
	for(i = 1 ;i <=100; i+=2)
	{
		sumOdd += i;//奇数
	}
	for(i = 2; i <= 100; i+=2)
	{
		sumEve += i;//偶数
	}
	printf("%d,%d,%d\n",sum,sumOdd,sumEve);
	return 0;
}


int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
		case 1:
			m++;
		case 2:
			n++;
		case 3:
			switch (n)
			{//switch允许嵌套使用
				case 1:
					n++;
				case 2:
					m++;
					n++;
					break;
			}
		case 4:
			m++;
			break;
		default:
			break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}

/*
不能做switch的参数的类型有什么？
switch的参数的类型 整形的                 不能是  float  double

JAVA    long不可以
*/
int main()
{
	long ch = 0;
	scanf("%d",&ch);
	switch (ch)
	{
		default:
		printf("输入有误，请输入正确的数字\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 1:
		printf("1\n");
		break;
	case 3:
		printf("3\n");
		break;
	
	}
	return 0;
}


//输入的字符是否为字母    a  z   A  Z       0  1 2
int main()
{
	char ch = 0;
	scanf("%c",&ch);
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		printf("is Up\n");
	}
	else
	{
		printf("is not Up\n");
	}
	return 0;
}


int main()
{
	int i = 0;
	for(i =1;i <= 100;i++)
	{
			if(i % 2 != 0)
			{
				printf("%d ",i);
			}
	}
	printf("\n");
	return 0;
}


int main()
{
	int a = 0;
	int b = 2;
	if(a == 1)
	{
		if(b == 2)
		{
			printf("hehe\n");
		}
		else
		{
			printf("haha\n");
		}
	}
	return 0;
}


int main()
{
	int age= 0;
	scanf("%d",&age);
	/*if(age <= 18)
	{
		printf("小鲜肉\n");
	}
	printf("老鲜肉\n");*/
	
	if(age <= 18)
	{
		printf("小鲜肉\n");
	}
	//else if( 18 <= age <= 30)
	//else if(age > 18 &&  age <= 30)
	else if(age <= 30)
	{
		printf("大鲜肉\n");
	}
	else
	{
		printf("老鲜肉\n");
	}
	
	return 0;
}



/*
3.
求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字，
例如：2+22+222                    +2222+22222
          2   2*10+2   22*10+2  
*/
int main()
{
	int a = 2;
	int n  = 0;
	int sum = 0;
	int tmp = 0;//2      22    222    2222
	int i = 0;
	scanf("%d",&n);//3  
	for(i = 0; i < n;i++)
	{
		tmp = tmp*10+a;//2    22    222
		sum += tmp;
	}
	printf("%d\n",sum);
	return 0;
}


/*
2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
*/

int main()
{
	int i = 0;
	for(i = 1;i <= 999999;i++)
	{
		//1、求i为几位数
		int tmp = i;
		int count = 0;
		int sum = 0;
		while(tmp != 0)
		{
			count++;
			tmp = tmp/10;
		}
		tmp = i;
		//2、tmp的每一位求出  然后进行次方运算 
		//123   123%10=3   12%10=2     1%10=1   1/10  = 0
		//  +  sum
		//pow(x,y);-->x^y       
		while(tmp != 0)//123
		{
			sum += pow((double)(tmp%10),(double)count);
			tmp = tmp/10;
		}

		//3、sum==i   printf("%d\n",i);
		if(sum == i) 
		{
			printf("%d\n",i);
		}
	}
	return 0;
}



int Function(int n)//1-n
{
	int count = 0;
	int i = 0;
	for(i = 1;i <= n;i++)
	{
		if(i % 10== 9)//19%10=9
		{
			count++;
		}
		if(i / 10 == 9)//97/10 = 9
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int ret = Function(100);
	printf("%d\n",ret);
	return 0;
}


int main()
{
	int i = 0;
	double sum = 0;
	int flg = 1;
	for(i = 1;i <= 100;i++)
	{
		sum = sum + flg * 1.0/i;
		flg = -flg;
	}
	printf("%lf\n",sum);
	return 0;
}
#endif
