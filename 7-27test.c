#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*
һά���飺
	�����ͬ�������͵����ݵļ��ϡ�������ڴ��������ġ�int arr[10];
	���鶨��֮�����û�г�ʼ����Ĭ��ֵΪ���ֵ��
	����ֲ���ʼ������������Ĭ��ֵΪ0��
	�����ǣ��ۺ����͡����帳ֵ ֻ��һ�λ��ᣬ�ڶ����ͬʱ��
ע�����
	1��(�ֲ�)����ʲôʱ��ȷ����С�� ����
	2������ʲôʱ������ڴ棿      ����
	3�����������ڴ棿     1M/2M

	������������-������������Ԫ�صĵ�ַ

	sizeof():  ���ֽڴ�С       ���ǣ������ڼ俴���ʽ�Ľ������������������
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr)/sizeof(arr[0]); ���������ﶨ�壬
	������ʹ��

	������������-������������Ԫ�صĵ�ַ
				��������£������������飺
				1��sizeof(arr) :��������������ֽڴ�С
				2��&arr+1 : 
һά����ʹ�ã�
ð������
ѡ������
ֱ�Ӳ�������
shell����(ϣ��)
��������
������
�鲢����
��������-�������򡣡���
*/
void BubbleSort(int arr[],int len)
{
	int i = 0;
	int flg = 0;
	for(i = 0;i < len-1;i++)//����
	{
		int j = 0;
		flg = 0;//ÿһ�ý���������Ϊ0
		for(j = 0;j < len-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flg = 1;
			}
		}
		if(flg == 0)//֤��û�н���
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {12,4,6,9,11,78,32,21};//����������
	int len = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,len);
	return 0;
}

#if 0
int main()
{
	char str1[100] = "abcdef";//7/100        6    
	char str2[] = "abcdef";//7 /6          7/6   
	char *str3 = "abcdef";//4/1         6
	char str4[100] = "abcdef\0xyz";//100/10/11      6
	char str5[] = "abcdef\0xyz";//11/10           6
	char *str6 = "abcdef\0xyz";//4          6
	char str7[100] = "abcdef\n\0xyz";//100/11     7
	char str8[] = "abcdef\n\0xyz";//12        7
	char *str9 = "abcdef\n\0xyz";//4          7
	printf("%d,%d\n",sizeof(str1),strlen(str1));
	printf("%d,%d\n",sizeof(str2),strlen(str2));
	printf("%d,%d\n",sizeof(str3),strlen(str3));
	printf("%d,%d\n",sizeof(str4),strlen(str4));
	printf("%d,%d\n",sizeof(str5),strlen(str5));
	printf("%d,%d\n",sizeof(str6),strlen(str6));
	printf("%d,%d\n",sizeof(str7),strlen(str7));
	printf("%d,%d\n",sizeof(str8),strlen(str8));
	printf("%d,%d\n",sizeof(str9),strlen(str9));
	return 0;
}


void Show(int arr[],int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
//����Ĵ��Σ��������������������ô�ͻ��˻�Ϊָ��
void Show2(int arr[])
{
	int len = sizeof(arr)/sizeof(arr[0]);// error
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int Fun()
{
	return 1;
}
int main()
{
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int a = 10;
	/*printf("%d,%d\n",sizeof(++a),a);
	printf("%d\n",sizeof(1+3.5));
	printf("%d\n",sizeof(Fun()));*/

	//printf("%d\n",sizeof(arr[4]));//4  
	//printf("%d\n",sizeof(arr[10]));//4   ����  

	/*int len = sizeof(arr)/sizeof(arr[0]);
	Show2(arr);
	int a = 10;
	int *p = &a;*/
	///Show(arr,len);
	
	return 0;
}


int main()
{
	int a = 10;
	int b = 20;
	int i = 0;
	int arr[5] = {0};
	for(i = 0;i <= 7;i++)
	{
		arr[i] = 0;
	}
	printf("%d,%d\n",&a,&b);
	/**/
	
	//0 1 2 3 4
	//arr[5] = 10;

	//char arr1[5] = {'a','b','c','d','e'};//�ַ�����
	//char arr2[5] = "abcd";//Ĭ����\0 //�ַ�����
	//char *p = "abcd";//�ַ���Ĭ����\0
	//char arr3[] = "abcd";//����Ϊ5   Ĭ����\0
	//printf("%s\n",p);//abcde  ��ӡ�ַ���-������\0ֹͣ��ӡ


	//int count = 10;
	//int arr[count] = {1,2,3};
	//int arr2[10] = {1,2,3,4,5,6,7,8,9,0};
	//arr2 = {1,2,3,4,5,6,7,8,9,0};
	return 0;
}
#endif