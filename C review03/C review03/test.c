#include<stdio.h>


#if 0
//�����������ӳ���

//C���Գ��õĿ⺯��
//IO���� �ַ����������� �ַ��������� �ڴ�������� ʱ��/���ں��� ��ѧ����
//ʹ�ÿ⺯�����������#include��Ӧ��ͷ�ļ�


//�Զ��庯��
//ret_type fun_name(paral, *)
//{
//	statement;//�����
//}
//ret_type ��������
//fun_name ������
//paral    ��������

int Max(int x, int y)
{
	return (x > y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 2;
	int b = 3;
	Swap1(a, b);
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
//������Ƕ�׵���
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i<3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}

//��������ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
#include <string.h>
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "world"));
	printf("%d\n", ret);
	return 0;
}

int main()
{
	printf("%d\n", printf("%d", printf("%d", 43)));
	return 0;
}
//printfʹ�ò����������ջ�����
//�㻻��һλ���������Ϊ���������+1����λ��Ϊ���������+21����λ��Ϊ���������+31���������ơ�

//�����������Ͷ���
//����������-�����߱�������һ��������ʲô��������ʲô������������ʲô
//�����Ķ���-����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��

//ͷ�ļ�test.h���ú���������
#ifndef __TEST_H__ 
#define __TEST_H__ 
//���������� 
int Add(int x, int y); 
#endif //__TEST_H__

//Դ�ļ�test.c���ú�����ʵ��
#include "test.h" 
//����Add��ʵ�� 
int Add(int x, int y) 
{    
	return x+y; 
} 

//�����ĵݹ�
//�����������ı�̼��ɳ�Ϊ �ݹ�

//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������

void print(int n) 
{ 
	if (n>9)    
	{ 
		print(n / 10); 
	}    
	printf("%d ", n % 10); 
} 
int main() 
{ 
	int num = 1234;    
	print(num);    
	return 0; 
}
#endif


























































