#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Max(int x,int y)
{
	return x > y ? x : y;
}

int main()
{
	int arr[10] = {0};
	arr[0];
	//int a = 10;
	//int b = 20;
	//int max = Max(a,b);
	//printf("max = %d\n",max);

	/*int ch = (10,20,30,40);
	printf("%d\n",ch);*/
	//int i = 9;
	return 0;
}

#if 0
int main()
{
	//int a = (int)3.14;//ǿ������ת��
	//printf("%d\n",a);
	int a = 10;
	//if( 15 <= a <= 20)     //if( 0 <= 20)
	if(a >= 15 && a <= 20)
	{
		printf("is ture\n");
	}
	else
	{
		printf("is not ture\n");
	}
	return 0;
}


int main()
{
	int a = 10;
	//--a;
	//a--;
	int b = a--;//b = a;  a = a-1;
	//printf("%d\n",a--);
	printf("%d,%d\n",a,b);
	//printf("%d\n",~a);
	//a = a+1;
	//a += 1;//a = a+1;
	//a++;
	//printf("%d\n",!a);//���漴��  0
	//printf("%d\n",!!a);//1  ˫�ط񶨱�϶�

	return 0;
}
int main()
{
	//int i = 15;
	int i =  -1;
	//if(i == 2)
	if(2 == i)
	{
		printf("i == 2\n");
	}
	//printf("%d\n",i>>1);
	printf("%d\n",i<<1);
	return 0;
}

int main()
{
	int input = 0;
	scanf("%d",&input);
	if(input%2==0)//4  2
	{
		printf("��ż��\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}


void Show(int arr[],int len)
{
	int i = 0;
	//�Ƚ��д�ӡ
	for(i = 0;i < len;i++)//  [)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[11] = {0};
	int i = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	//sizeof-->���ֽڴ�С
	//sizeof(arr)--> ������  ��������������ֽڴ�С
	//printf("%d\n",sizeof(arr));
	Show(arr,len);
	for(i = 0;i < len;i++)
	{
		scanf("%d",&arr[i]);
	}
	Show(arr,len);
	//�Ƚ��д�ӡ
	//for(i = 0;i < 10;i++)//  [)
	//{
	//	printf("%d ",arr[i]);
	//}
	//printf("\n");
	//��ʼ��

	//for(i = 0;i < 10;i++)//  [)
	//{
	//	printf("%d ",arr[i]);
	//}


	/*arr[10] = 88;
	printf("%d\n",arr[10]);*/


	//printf("hiahai\n");
	//int ch;
	/*int a1 = 1;
	int a2 = 2;
	int a3 = 3;*/

	return 0;
}
//int Add(int a,int b);//����
//�������﷨��
int Add(int a,int b)
{
	int sum = a+b;
	return sum;
}
int main()
{
	int num1 = 10;
	int num2 = 20;

	int sum = Add(num1,num2);
	printf("sum==>%d\n",sum);

	/*int sum = num1+num2;
	printf("sum==>%d\n",sum);*/
	return 0;
}
int main()
{
	int i = 0;
	for(i = 0;i < 10;i++)//i--   i*=2....
	{
		printf("����\n");
	}
	//
	return 0;
}
int main()
{
	int input = 0;
	printf("�����ú�ѧϰ��������1������������0>>>");
	scanf("%d",&input);

	if(input)
	{
		printf("��ѡ���˺ú�ѧϰ�����ӭȢ�׸��������߸߸�˧\n");
	}
	else
	{
		printf("�����㻹�ǻ�ȥ�����\n");
	}


	/*if(input == 1) 
	{
		printf("��ѡ���˺ú�ѧϰ�����ӭȢ�׸��������߸߸�˧\n");
			printf("����Ϊ������\n");
	}
	else
	{
		printf("�����㻹�ǻ�ȥ�����\n");
	}*/

	//if(input == 1) 
	//	printf("��ѡ���˺ú�ѧϰ�����ӭȢ�׸��������߸߸�˧\n");
	//	if(input==9) 
	//		printf("�õ�");
	//else
	//	printf("�����㻹�ǻ�ȥ�����\n");

		//if(input == 1) //"==" �߼��жϲ�����
		//{
		//	printf("��ѡ���˺ú�ѧϰ�����ӭȢ�׸��������߸߸�˧\n");
		//}
		//
		//if(input==9) 
		//{
		//	printf("�õ�");
		//}
		//else
		//{
		//	printf("�����㻹�ǻ�ȥ�����\n");
		//}
	return 0;
}
#endif
