#include<stdio.h>

//ָ��
#if 0
int main()
{
	int a = 10;//���ڴ��п���һ��ռ�
	int* p = &a;//�Ա���a��ȡ�����ĵ�ַ������ʹ��&������
	            //��a�ĵ�ַ��ŵ���p�����У�p����һ��ָ�����
	return 0;
}
//ָ����Ǳ�����������ŵ�ַ�ı���
//�����ָ���ֵ�������ɵ�ַ����


//ָ������
int main()
{
	int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	return 0;
}
//ָ������;�����ָ����ǰ�������һ���ж�󣨾��룩

//ָ��Ľ�����
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;
	*pi = 0;
	return 0;
}
//char* ��ָ�������ֻ�ܷ���һ���ֽڣ�
//int* ��ָ��������ܷ����ĸ��ֽ�

//ָ�������
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}
//����������������Ԫ�صĵ�ַ

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };    
	int *p = arr; //ָ����������Ԫ�صĵ�ַ    
	int sz = sizeof(arr) / sizeof(arr[0]);    
	int i = 0;    
	for (i = 0; i<sz; i++)    
	{        
		printf("%d ", *(p + i));    
	}    return 0; 
}
#endif

