
//���Լ���
#include <stdio.h>

////�� 1��+2��+3�� ...+ n! �������������
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	//int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j; //ret������һ�εĽ��
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////������ѭ����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
////ģ��ʵ��strcpy
//char* my_strcpy(char* dst, const char* src)
//{
//	char *cp = dst;
//	assert(dst && src);
//
//	while (*cp++ = *src++)
//		;
//	return dst;
//}

////const������
////����1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int *p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//����2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int *const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//int main()
//{
//	//������cosnt��
//	test1();
//	//����const����*�����
//	test2();
//	//����const����*���ұ�
//	test3();
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	//assert(str != NULL);
	while (*str)//�ж��ַ����Ƿ����
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	const char* p = "abcdef";
	//����
	int len = my_strlen(p);
	printf("len = %d\n", len);
	return 0;
}