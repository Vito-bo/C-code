
//ָ��Ľ���
#include <stdio.h>
#include<stdlib.h>
////1.�ַ�ָ��
//int main()
//{
//	/*char ch = 'w';
//	char *pc = &ch;
//	*pc = 'm';
//	printf("%c\n", ch);*/
//	char *pstr = "hello world";//��һ�������ַ��������ַ��ĵ�ַ��ŵ�ָ�����pstr��
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char *str3 = "hello world";
//	char *str4 = "hello world";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

////ָ������
//int main()
//{
//	int *arr1[10]; //����ָ�������
//	char *arr2[5]; //һ���ַ�ָ�������
//	char **arr3[5];//�����ַ�ָ�������
//
//	return 0;
//}
//
////����ָ��
//int main()
//{
//	int(*p)[10];
//	//P�Ⱥ�*��ϣ�p��һ��ָ�������ָ�����һ����СΪ10�����͵����顣
//	//����p��һ��ָ�������ָ��
//	return 0;
//}
//
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//���������ָ�����
////һά���鴫��
////void test(int arr[])
////{}
////void test(int arr[10])
////{}
////void test(int *arr)
////{}
//void test2(int *arr[20])
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	//test(arr);
//	test2(arr2);
//	return 0;
//}

////��ά���鴫��
//void test1(int arr[3][5])//ok��
//{}
//void test2(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test3(int *arr)//no ���Ͳ�ƥ��
//{}
//void test4(int* arr[5])//no ���Ͳ�ƥ��
//{}
//void test5(int(*arr)[5])//ok
//{}
//void test6(int **arr)//no ����ָ���� ����ָ�벻����
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test6(arr);
//	return 0;
//}

////һ��ָ�봫��
//void Printf(int *p, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	int *p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	Printf(p, len);
//	return 0;
//}

////����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test()
//{
//	printf("hi");
//}
//void(*p)(test);//����ָ��,���溯��test()�ĵ�ַ
//
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", p);
//	return 0;
//}

////����ָ��
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//void(*signal(int, void(*)(int)))(int);
//
//typedef void(*p)(int);
//p signal(int, p);

////����ָ������
////�Ѻ����ĵ�ַ��ŵ�һ�������У����������ͽ��� ����ָ������
//void(*arr[5])();
//
//////����ָ�������;��ת�Ʊ�
////������
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("************************\n");
//		printf("  1:add          2:sub  \n");
//		printf("  3:mul          4:div  \n");
//		printf("************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret=%d\n", ret);
//			break; 
//		case 3:
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret=%d\n", ret);
//			break; 
//		case 4:
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//		    printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////ʹ�ú���ָ������ʵ�֣�
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div };//ת�Ʊ�
//	while (input)
//	{
//		printf("*******************\n");
//		printf("  1:add     2:sub  \n");
//		printf("  3:mul     4:div  \n");
//		printf("*******************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("��������\n");
//		printf("ret=%d\n", ret);
//	}
//	return 0;
//}
////ָ����ָ�������ָ��
////ָ��ָ��һ�����飬�����Ԫ�ض��� ����ָ��
//void test(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��
//	void(*p)(const char*) = test;
//	//����ָ�������arr
//	void(*arr[5])(const char* str);
//	arr[0] = test;
//	//ָ����ָ������arr��ָ��parr
//	void(*(*parr)[10])(const char*) = *arr;
//}

////�ص�����--ͨ������ָ����õĺ���
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 7, 3, 5, 9, 2, 4, 8, 6, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

int int_cmp(const void* p1, const void* p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void _swap(void *p1, void *p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char*)base + (j + 1)*size)>0)
			{
				_swap((char*)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}