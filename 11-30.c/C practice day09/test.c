#include<stdio.h>
#include<malloc.h>


/*
//malloc��̬�ڴ����
// calloc ��̬�ڴ����,���Ұѿռ��ÿ���ֽڳ�ʼ��
//�ռ����������ô����ôȥ��
int  main()
{
	int num = 0;
	scanf("%d", &num);
	
	int* arr1 = (int*)malloc(num*sizeof(int));
	int* arr2 = (int*)calloc(num,sizeof(int));

	if (arr1 == NULL)
	{
		printf("mallo error\n");
	}
	else
	{
		printf("mallo success\n");
	}
	free(arr1);
	free(arr2);

	free(NULL);
	//������� ptr ��NULLָ�룬����ʲô�¶�����
	//ϵͳ������ԭ���ͷ�����free
	//�п��ܵڶ����ͷ�ʱ��һ���ͷŵĿռ��ѱ�����ʹ��
	return 0;
}

//realloc ԭ������
//void* realloc (void* ptr, size_t size); 
int  main()
{
	int num = 0;
	scanf("%d", &num);

	int* arr1 = (int*)malloc(num*sizeof(int));
	int* arr2 = (int*)calloc(num, sizeof(int));
	int* arr3 = (int*)realloc(arr2, sizeof(int)* 20);

	for (size_t i = 0; i < 20;++i)
	{
		arr3[i] = i;
	}

	if (arr1 == NULL)
	{
		printf("mallo error\n");
	}
	else
	{
		printf("mallo success\n");
	}
	free(arr1);
	free(arr2);
	free(arr3);

	return 0;
}
*/


//ջ�����������ģ��������������ġ�
//�����Ķ�̬�ڴ����
//��NULLָ��Ľ����ò���
void test() 
{
	int *p = (int *)malloc(INT_MAX / 4);    
	*p = 20;//���p��ֵ��NULL���ͻ�������    
	free(p); 
}
