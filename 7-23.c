#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
������
       1������ƥ��
	   2������������
����ֵ��
		����з���ֵ�����뷵��һ��ֵ��������о���.
		        ����ֵ������Ҳ��Ҫƥ��
		���û�з���ֵvoid ���޷���ֵ���ͣ�
��������
		C�����飺��������ѭ�շ�ʽ����FirstName  _ 

	�βεĸı� ����Ӱ��ʵ�εĸı�(��ֵ����)
*/
//����1����������  0����������  
//�����������Ӻ����д�ӡ.
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
void Swap(int x,int y)//��ʽ����  �β�
{
	int tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int *px,int *py)//��ʽ����  �β�
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;//ʵ�ʲ���--��   ʵ��
	int b = 20;
	Swap2(&a,&b);//��ַ����
	Swap(1,2+3);//��ַ����
	Swap(a+2,b);//��ַ����
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
	//count:�ֽ�Ϊ��λ
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
��дһ�����򣬿���һֱ���ռ����ַ���
�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
��������ֲ������
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
	printf("******��ӭ������������Ϸ********\n");
	printf("******         1.play      ************\n");
	printf("******         0.exit       ************\n");
	printf("**********************************\n");
}
void Game()
{
	//printf("��������Ϸ���߼�����\n");
	//rand()%100-->[0-100)    rand()%100+1->[1-100]
	int randNum = rand()%100+1;//����� 0 - 32767
	int num = 0;
	//printf("randNum==%d\n",randNum);
	while(1)
	{
		printf("��������Ҫ�µ�����-��");
		scanf("%d",&num);
		if(num > randNum)
		{
			printf("�´���\n");
		}
		else if(num < randNum)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
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
		printf("��������Ĳ�������");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷ�Ĳ�����\n");
			break;
		}
	}while(input);
	return 0;
}
#endif