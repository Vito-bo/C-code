
#include <stdio.h>
#include <string.h>

//�������ڴ��еĴ洢

//���͵�����
//1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С����С������ʹ�÷�Χ��

//���͵Ļ�������
//���μ��� char short int long 
//�����ͼ��� float double
//�������� �������� �ṹ������struct ö������enum ��������union
//ָ������ int* pi; char* pc; float* pf; void* pv;
//������ void

//������ԭ���������붼��ͬ
//����������˵�����ݴ���ڴ�����ʵ��ŵ��ǲ���


#if 0

//�жϵ�ǰ�������ֽ���

int check_sys1()
{
	int i = 1;
	return (*(char*)&i);
}

//����2
int check_sys2()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	int ret = check_sys2();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}

int main()
{
	char a = -128;
	printf("%u\n", a);
	return 0;
}
int main()
{
	char a = 128;
	printf("%u\n", a);
	return 0;
}
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j); //-10
	return 0;
}

int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}
#endif
int main()
{
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}































