
//����

#include <stdio.h>
#include <stdlib.h>

//һά����
//������һ����ͬ����Ԫ�صļ���
//
//int arr1[10] = { 1, 2, 3 };
//int arr2[] = { 1, 2, 3, 4 };
//char ch1[3] = { 'a', 98, 'c' };
//char ch2[] = { 'a', 'b', 'c' };
//char ch3[] = "abcdef";
//
//int main()
//{
//	int arr[10] = { 0 }; // ����Ĳ���ȫ��ʼ��
//	int len = sizeof(arr) / sizeof(arr[0]); //���������е�Ԫ�ظ���
//	//���������ݽ��и�ֵ��������ʹ���±������ʵģ��±��0��ʼ��
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
////�������ڴ������������ŵ�
//

////��ά����
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
////��ά�������ڴ���Ҳ�������洢��
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//

//��������������Ԫ�صĵ�ַ���������⣩
//1.sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ������������
//2.&��������ȡ����������ĵ�ַ��&����������������ʾ��������

//ð������
void Bubble_sort(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 7, 2, 1, 6, 5, 8, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}