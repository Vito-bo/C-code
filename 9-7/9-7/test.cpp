
//��̬�ڴ����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
////void *malloc(size_t size);
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[100] = { 0 };
//
//	int *ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr){
//		int i = 0;
//		for (i = 0; i < num; i++){
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr); //�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	ptr = NULL;
//	return 0;
//}

////void *free(void* ptr);
////void *calloc(size_t num, size_t num);
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////void* realloc (void* ptr, size_t size);
//int main()
//{
//	int *ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//ҵ����
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//��չ����
//	//����1
//	ptr = (int*)realloc(ptr, 1000);
//	//����2
//	int*p = NULL;
//	p = (int*)realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//ҵ����
//	free(ptr);
//	return 0;
//
//}

////�����Ķ�̬�ڴ����
////1.��NULLָ��Ľ�����
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}
////2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int i = 0;
//	int * p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p){
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++){
//		*(p + i) = i; //��i��10����ż����Խ��
//	}
//	free(p);
//}
////3.�ԷǶ�̬�ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);  //�Ƿ��ͷ�
//	return 0;
//}
////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int *p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//	return 0;
//}
////5.��ͬһ���ڴ����ͷ�
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//	return 0;
//}
////6.��̬�ڴ������ͷţ��ڴ�й©��
//void test()
//{
//	int *p = (int *)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}//�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©��
//int main()
//{
//	test();
//	while (1);
//}
////������1
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//�����ÿ�ָ�룬�ᵼ�³������
//û�ж��ڴ���л���free(),�ֲ���������ջ����malloc()�ڶ���;�ֲ������ں���ִ�����֮�����ջ�ռ�
//int main()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	puts(str);
//}
////������2
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	puts(str);
//	return 0;
//}
////��ӡ���룺pָ��ջ�ڴ桱�����ú���֮��ջ�ڴ��ͷţ���str��ָ��ջ����ַ��
////����ڴ�й©����ջ����������������;���洢�������ݡ�
////������3
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	puts(str);
//	return 0;
//}
//���hello���ڴ�й©
//����̬������ڴ��ָ�븳ֵ��strָ�룻��GetMemory()������δ������ʧ�ܵ������if(*p==NULL){   };
//û�жԷ�����ڴ���л���free()��
int main()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		puts(str);
	}
	return 0;
}
//�۸Ķ�̬�ڴ��������ݣ��������Ԥ�ϣ��ǳ�Σ�ա�
//��Ϊfree(str); ֮��str ��ΪҰָ�룬if(str != NULL)��䲻�����á�
//Ӧ��free(str)֮��str��ֵΪ�� str = NULL;

