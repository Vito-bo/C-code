#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
/*
sizeof : �ǲ��Ǻ�����  ���Ǻ���    �ؼ���
         ���ֽڴ�С�ġ� ��λ���ֽ�
��ʶ������ĸ  ����  �»���   ���ǲ��������ֿ�ͷ
������

������ ʹ�ùؼ���const���Σ�֮�� �Ͳ��ܱ��ı� ,
           �����ͬʱ����Ҫ���г�ʼ����

�Ϸ�      ����

ȫ�ֱ��� ����֮�� ���û�и���ֵ����ôĬ��ֵΪ0;

����ֲ�����֮����Ҫ��ʹ��֮ǰ�����г�ʼ����
���û�г�ʼ������ôĬ��ֵΪ�����ֵ  ʮ�����ƣ�0xcccccccc
��������������������     0xcccccccc

��ȫ�ֱ����;ֲ������ı�����һ����ʱ��
����ʹ�þֲ�������

���ԣ�
1����ϵ�   F9 ���ߣ�
2����ݼ�F5  ����ʵ������
3����ɫ��ͷ��ָ����һ���ǻ�û�б�ִ�еĴ��롣��
4��F10�����     F11�����
*/
#define PI 3.14159
int main()
{
	double d = PI * PI *2;
	//char *p = "hellobit";
	//int a = 0;
	//int b = 0;
	//scanf("%d%d",&a,&b);
	////getchar();//a
	//printf("%d,%d\n",a,b);

	/*int num1 = 10;
	int num2 = 20;
	int sum = 0;
	printf("������������������");
	scanf("%d %d",&num1,&num1);
	sum = num1+num1;
	printf("sum = %d\n",sum);*/
	return 0;
}


#if 0
int g_val = 88;
//extern int g_val2;//extern    �����ⲿ����
int main()
{
	int g_val = 188;
	printf("%d\n",g_val);

	//printf("%d\n",g_val2);
	//g_val = g_val+99;
	//printf("%d\n",g_val);
	return 0;
}


void Fun()
{
	int a = 10;
}
//int g_val = 10;
int main()
{
	int local_val = 99;
	
	{
		//printf("local_val1 == %d\n",local_val);//99
		int a = 199;
		printf("local_val2 ==%d\n",a);//199
	}
	//a = 9999;

	local_val = local_val + 10;
	printf("local_val3 ==%d\n",local_val);//109

	return 0;
}



int age;//ȫ�ֱ��� ����֮�� ���û�и���ֵ����ôĬ��ֵΪ0;
int main()
{

	/*int _____ = 99;
	int ____________________ = 99;
	printf("%d\n",____________________);*/

	/*char firstName = 'g';
	char first_Name = 'g';*/
	//const int age2 = 19;
	int a = 10;//����ֲ�����֮����Ҫ��ʹ��֮ǰ�����г�ʼ����
	//printf("%d\n",age);
	printf("%d\n",a);
	//age2 = 99;

	//int 2age = 99;

	//printf("%d\n",sizeof(a));//
	//printf("%d\n",sizeof  a);//
	//printf("%d\n",sizeof(int));//
	////printf("%d\n",sizeof  int );
	return 0;
}


int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));//???????
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}
#endif
