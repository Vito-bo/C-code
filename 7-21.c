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
	}while(i < 0);//���ٻ�ִ��һ������

	return 0;
}


#if 0
/**
ʹ�� while(  )    for(   )       do{ѭ����}while( );  
�ֱ���  1-100�����ĺ�  ż���ĺ�  ����ĺ�
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
		sumOdd += i;//����
		i+=2;
	}while(i <= 100);

	i = 2;
	do
	{
		sumEve += i;//ż��
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
		sumOdd += i;//����
		i+=2;
	}
	i = 2;
	while( i <= 100)
	{
		sumEve += i;//ż��
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
		sumOdd += i;//����
	}
	for(i = 2; i <= 100; i+=2)
	{
		sumEve += i;//ż��
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
			{//switch����Ƕ��ʹ��
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
������switch�Ĳ�����������ʲô��
switch�Ĳ��������� ���ε�                 ������  float  double

JAVA    long������
*/
int main()
{
	long ch = 0;
	scanf("%d",&ch);
	switch (ch)
	{
		default:
		printf("����������������ȷ������\n");
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


//������ַ��Ƿ�Ϊ��ĸ    a  z   A  Z       0  1 2
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
		printf("С����\n");
	}
	printf("������\n");*/
	
	if(age <= 18)
	{
		printf("С����\n");
	}
	//else if( 18 <= age <= 30)
	//else if(age > 18 &&  age <= 30)
	else if(age <= 30)
	{
		printf("������\n");
	}
	else
	{
		printf("������\n");
	}
	
	return 0;
}



/*
3.
��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ�����֣�
���磺2+22+222                    +2222+22222
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
2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
*/

int main()
{
	int i = 0;
	for(i = 1;i <= 999999;i++)
	{
		//1����iΪ��λ��
		int tmp = i;
		int count = 0;
		int sum = 0;
		while(tmp != 0)
		{
			count++;
			tmp = tmp/10;
		}
		tmp = i;
		//2��tmp��ÿһλ���  Ȼ����дη����� 
		//123   123%10=3   12%10=2     1%10=1   1/10  = 0
		//  +  sum
		//pow(x,y);-->x^y       
		while(tmp != 0)//123
		{
			sum += pow((double)(tmp%10),(double)count);
			tmp = tmp/10;
		}

		//3��sum==i   printf("%d\n",i);
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
