
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#if 0
void GetMemory(char* p)
//void GetMemory(char** p)
{
	p = (char *)malloc(100);
	//*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(str);
	//GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	Test();  //�������
	return 0;
}

//��Ŀ2

//��̬�ڴ�����ڶ���
//ϵͳ��Խ��ļ���ǳ��
//ջ֡����������ź����ľֲ�����
char *GetMemory(void) 
{ 
	//char p[] = "hello world"; //ջ
	//static char p[] = "hello world";//��̬��
	//char* p = "hello world";//������
	
	char* p = (char*)malloc(12);//����
	strcpy(p, "hello world");

	return p; //����������������Ԫ�صĵ�ַ
}

void Test(void) 
{
	char *str = NULL;    
	str = GetMemory();    
	printf("%s\n",str); 

	free(str);
}
int main()
{
	Test();  //������ֵ
	return 0;
}


//��Ŀ3
void GetMemory(char **p, int num) 
{ 
	*p = (char *)malloc(num); 
} 
void Test(void) 
{ 
	char *str = NULL;    
	GetMemory(&str, 100);    
	strcpy(str, "hello");    
	printf(str); 
}
int main()
{
	Test();  //��� hello
	return 0;
}

//��Ŀ3
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str); //free�ǰѿռ��ʹ��Ȩ����ϵͳ�����������ٿռ�
	//str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test(); //��� world
	return 0;
}


//��������  C99
//�ṹ�е����һ��Ԫ��������δ֪��С������

//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;

//�ṹ�е����������Աǰ���������һ��������Ա�� 
//sizeof ���ص����ֽṹ��С����������������ڴ档 
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬
//���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��


typedef struct st_type
{
	int i;
	int a[];//���������Ա
}type_a;

int main()
{
	printf("%d\n", sizeof(type_a));
	return 0;
}
#endif




