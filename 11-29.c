#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	return 0;
}

#if 0
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr+0));//x     6
	//printf("%d\n", strlen(*arr));//�﷨����
	//printf("%d\n", strlen(arr[1]));//�﷨����
	//printf("%d\n", strlen(&arr));//�﷨����
	//printf("%d\n", strlen(&arr+1));//�﷨����
	printf("%d\n", strlen(&arr[0]+1));//x-1   5
	
	/**/

	printf("%d\n", sizeof(arr));//1    6     7
	printf("%d\n", sizeof(arr+0));//1   4
	printf("%d\n", sizeof(*arr));//1      1
	printf("%d\n", sizeof(arr[1]));//     1
	printf("%d\n", sizeof(&arr));//4      4
	printf("%d\n", sizeof(&arr+1));//    4
	printf("%d\n", sizeof(&arr[0]+1));//  4
*/


	return 0;
}


int main()
{
	char arr[] = {'a','b','c','d','e','f'};
	/*
	printf("%d\n", strlen(arr));//x   //�﷨����
	printf("%d\n", strlen(arr+0));//x  //�﷨����
	//printf("%d\n", strlen(*arr));//x  //�﷨����   char *
	//printf("%d\n", strlen(arr[1]));//1   //�﷨����     1
	//printf("%d\n", strlen(&arr));//�﷨����      ����ָ��
	//printf("%d\n", strlen(&arr+1));//�﷨����   ����ָ��
	printf("%d\n", strlen(&arr[0]+1));//�﷨����  x-1
	

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4



	return 0;
}



int main()
{
	int a[] = {1,2,3,4};
	printf("%d\n",sizeof(a));//16
	printf("%d\n",sizeof(a+0));//4
	printf("%d\n",sizeof(*a));//4
	printf("%d\n",sizeof(a+1));//4
	printf("%d\n",sizeof(a[1]));//4
	printf("%d\n",sizeof(&a));//4
	printf("%d\n",sizeof(*&a));//4
	printf("%d\n",sizeof(&a+1));//4
	printf("%d\n",sizeof(&a[0]));//4
	printf("%d\n",sizeof(&a[0]+1));//4
	return 0;
}



/*
qsort:������ԭ��
�ײ� ��һ����������

void qsort( void *base, size_t num, 
size_t width, 
int ( *compare )(const void *elem1, const void *elem2 ) );

size_t width:  sizeof(int)

ð������:
*/

void Show(int *arr,int len) 
{
	int i = 0;
	for(i=0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

/*
base:������Ҫ���������
num�����������ݵ�����
size��Ҫ�������ݵ��ֽڴ�С 
int ( *p )(const void *p1, const void *p2 )
����ָ��
*/

//ð������   �Ż�
void BubbleSort1(int *arr,int len) 
{
	int i = 0;//����
	for(i = 0;i < len-1;i++)
	{
		int j = 0;//����
		for(j = 0;j < len-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
//�Ż�
void BubbleSort(int *arr,int len) 
{
	int i = 0;//����
	int flg = 0;
	for(i = 0;i < len-1;i++)
	{
		int j = 0;//����
		flg = 0;
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
		if(!flg)
		{
			break;
		}
	}
}

//�Ƚ�p1��p2�Ĵ�С
int _cmpInt(const void *p1, const void *p2 )
{
	return * (int *)p1 - * (int *)p2;
}

void _swap( void *p1 ,void *p2,int size  )
{
	int i = 0;
	for(i = 0;i < size;i++)
	{
		char tmp = * (((char *)p1) + i);
		*( ((char *)p1) + i) = *(  ((char *)p2) + i );
		*(  ((char *)p2) + i ) = tmp;
	}
}

void MyQsort(void *base, int len, int  size,  
			 int ( *cmp )(const void *p1, const void *p2 ) )
{
	//ð������
	int i = 0;//����
	for(i = 0;i < len-1;i++)
	{
		int j = 0;//����
		for(j = 0;j < len-1-i;j++)
		{
			//*(base+j)
			//if(base[j] > base[j+1]) error
			if(  cmp((char *)base + j*size, 
				           (char *)base + (j+1)*size   ) > 0 )
			{
				//����   һ���ֽ�һ���ֽڽ��н���
				_swap(  (char *)base + j*size, 
				           (char *)base + (j+1)*size  , size );
			}
		}
	}
}
int main()
{
	int arr[] = {12,6,3,1,9,7,2,8,19,5};
	//int arr[] = {1,2,3,4,5,6,7,8,9,15};

	int len = sizeof(arr)/sizeof(arr[0]);
	Show(arr,len);
	//BubbleSort(arr,len);
	MyQsort(arr,len,sizeof(int),_cmpInt);
	Show(arr,len);
	return 0;
}




void Show(int *arr,int len) 
{
	int i = 0;
	for(i=0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
//�Ƚ�p1��p2�Ĵ�С
int _cmpInt(const void *p1, const void *p2 )
{
	return * (int *)p1 - * (int *)p2;
}
int main()
{
	int arr[] = {12,6,3,1,9,7,2,8,19,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	Show(arr,len);
	qsort(arr,len,sizeof(int),_cmpInt);
	Show(arr,len);
	return 0;
}
#endif
