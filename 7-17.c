#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 


/*
һ���������⣺ö��   define ���峣��  ��ʲô����
1��#define ����ĳ���  �����Խ��е��� 
2��define����ı�ʶ����������������   ö�پ�������

��Ŀ��ö�ٻ�    �о���Ϣ������

�����ַ��� 
  1����ӡ�ַ���ʹ�ø�ʽ�����%s.��Ҫע�⣺%s��ӡ��ʱ��
  ����ԭ������\0ֹͣ��ӡ��

  2��strlen();  �������ַ����ĳ���:��ǰ�ַ������ַ��ĸ���
  ����ԭ������\0ֹͣ

*/
#if 0
int main()
{
	int year = 0;
	for(year = 1000; year <= 2019; year++)
	{
		//1���ܱ�4�������ǲ��ܱ�100����
		//2���ܱ�400����
		if((year%4 == 0 && year%100 != 0)  || (year % 400 == 0) )
		{
			printf("%d\n",year);
		}
	}
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for(i = 1;i <= 9;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//8   
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//����
	for(i = 101;i <= 200;i += 2)// i = 5
	{
		for(j = 2;j <= sqrt((double)i);j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//������ǰѭ��
			}
		}
		if(j > sqrt((double)i)) //������
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}
//
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//����
	for(i = 100;i <= 200;i++)// i = 5
	{
		for(j = 2;j <= i/2;j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//������ǰѭ��
			}
		}
		if(j > i/2) //������
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}
//�Գ���
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//����
	for(i = 100;i <= 200;i++)// i = 5
	{
		for(j = 2;j < i;j++)//   2-4
		{
			if(i % j == 0)
			{
				break;//������ǰѭ��
			}
		}
		if(j == i) //������
		{
			count++;
			printf("%d\n",i);
		}

	}
	printf("count == %d\n",count);
	return 0;
}

//ת���ַ�
int main()
{

	//printf("%d\n",strlen("c:\e") );
	//printf("%s\n","c:\est");

	//char *str1 = "hello";
	//printf("%d\n",strlen(str1));//�������ַ������ȵ�
	/*printf("%d\n", strlen("c:\est"));*/
	//printf("%c\n",'\32');
	//printf("%d\n",'\x123');
	return 0;
}
//
int main()
{
	printf("���Ǻ�˧�ÿɰ�");
	printf("\r");
	printf("������ĺ�˧�ÿɰ�\n");
	/*printf("%s\n","\"hello\"");
	printf("%s\n","c:\\code\\test.c");
	printf("%s\n"," \' ");*/
	return 0;
}
int main()
{
	//�ַ���    ������˫������������һ�����ݣ�
	//��������\0��β   ��־�������ı�־
	char *str1 = "hello";

	//str2 ��һ���ַ�����   
	char str2[] = "bit";
	//�ַ�����
	char str3[4] = {'a','b','c','d'};
	char ch2 = 'g';

	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	return 0;
}
enum Day
{
	MON = 1,
	THU = 4,
	WED
	//......
};
int main()
{
	//int a = 10;
	//Day day = 1;
	//Day day2 = MON;
	/*printf("%d\n",MON);
	printf("%d\n",THU);
	printf("%d\n",WED);*/
	//const int a = 10;
	//printf("%d\n",SIZE);
	return 0;
}
#endif

