
//ָ��--��ָ����Ǳ�����������ŵ�ַ�ı���
#include<stdio.h>
//
//int main()
//{
//	//int a = 10;//���ڴ��п���һ��ռ�
//	//int *p = &a;//�Ա���a��ȡ�����ĵ�ַ��ʹ��&������
//	//			//��a�ĵ�ַ�����p�����У�p����һ��ָ�����
//	
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	//ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//	return 0;
//}
//
//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];
//	float *vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}
//
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}

////ָ�������
////��������ʾ����������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

