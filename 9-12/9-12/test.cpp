
//����عɱ��Կ���-C����

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

////1.
//int main()
//{
//	char str[] = "Welcome to shanxi";
//	int Array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	char *p = str;
//	int  n;
//	printf("%d\n", strlen(str));//17
//	printf("%d\n", sizeof(str));//18
//	printf("%d\n", sizeof(Array));//36
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(n));//4
//	return 0;
//}

////2.�۲����г�������ʱ�Ƿ��������⣿
//#define MAX_SIZE 255
//int main()
//{
//	unsigned char buff[MAX_SIZE + 1];
//	unsigned char i;
//	for (i = 0; i <= MAX_SIZE; i++)
//	{
//		buff[i] = i;
//		printf("%d\n", buff[i]);
//	}
//	return 0;//������ѭ�����޷���char�����ݷ�Χ0~255
//}

////4.
//void GetMemory(char *p)
//{
//	p = (char*)malloc(57);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "51 C++");
//	printf(str);
//	return 0;
//}
////�����������ΪGetMemory�������ܲ����ݶ�̬�ڴ棬
////main�����е�strһֱ����NULL��strcpy()��ʹ�������
////ִ��GetMemory֮��p�õ��·���Ŀռ��ַ��str��Ȼ��NULL��
////û�ж��ڴ����free(),�ֲ���������ջ����malloc�ڶ�����
////�ֲ������ں���ִ�����֮�����ջ�ռ�

////5.
//char* GetMemory(void)
//{
//	char p[] = "http-mv";
//	return p;
//}
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	puts(str);
//	return 0;
//}
////GetMemory�е�p[]Ϊ�����ڵľֲ��������ں������غ��ڴ��Ѿ����ͷš�
////ִ��str=GetMemory()����str������NULLָ�룬����str�����ݲ���"http-mv",��������
//
////3.
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(57);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "vip.com");
//	puts(str);
//	return 0;
//}
////�ܹ����vip.com���ڴ�й©
////����̬�����ڴ��ָ�븳ֵ��strָ�룬��GetMemory()������δ������ʧ�ܵ����
////if(*p == NULL){};
////û�жԷ�����ڴ���л���free();

////4.
//int main()
//{
//	char *str = (char *)malloc(57);
//	strcpy(str, "51CC");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "C++");
//		printf(str);
//	}
//	return 0;
//}
////�۸Ķ�̬�ڴ��������ݣ��������Ԥ�⣬�ǳ�Σ��
////��Ϊfree(str)֮��str��ΪҰָ�룬if(str!=NULL)��䲻������
////Ӧ����free(str)֮��str��ֵΪ�� str=NULL
//
//5.����ʵ��8bit���ݵ�ָ��λ����0������1������������λ����
char bit_set(unsigned char *p_data, unsigned char pos, int flag)
{
	assert(p_data);
	if (flag == 1)
	{
		*(p_data) |= (1 << (pos - 1));
	}
	else if (flag == 0)
	{
		*(p_data) &= ~(1 << (pos - 1));
	}
	return *p_data;
}

int main()
{
	unsigned char num1 = 15;//1111
	unsigned char ret1 = bit_set(&num1, 3, 0);//11
	printf("%d\n", ret1);
	unsigned char num2 = 11;
	unsigned char ret2 = bit_set(&num2, 3, 1);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}

//6.�ַ������ƺ���
void severse(char *p, char *q)       //�ַ�����ת
{
	char temp;
	assert(p);
	assert(q);
	while (p<q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}
void RightLoopMove(char *pstr, unsigned short steps)
{
	int len = strlen(pstr);
	severse(pstr, pstr + len - steps - 1);       //ǰ���ַ�ת
	severse(pstr + len - steps, pstr + len - 1);   //�󲿷ַ�ת
	severse(pstr, pstr + len - 1);             //���巭ת
}
int main()
{
	char arr[] = "abcdefghi";
	RightLoopMove(arr, 2);
	printf("%s\n", arr);
	return 0;
}
