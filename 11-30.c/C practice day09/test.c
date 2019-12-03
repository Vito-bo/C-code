#include<stdio.h>
#include<malloc.h>


/*
//malloc动态内存分配
// calloc 动态内存分配,并且把空间的每个字节初始化
//空间的申请是怎么来怎么去的
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
	//如果参数 ptr 是NULL指针，则函数什么事都不做
	//系统不可以原地释放两次free
	//有可能第二次释放时第一次释放的空间已被别人使用
	return 0;
}

//realloc 原地扩容
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


//栈是向下生长的，堆是向上生长的。
//常见的动态内存错误
//对NULL指针的解引用操作
void test() 
{
	int *p = (int *)malloc(INT_MAX / 4);    
	*p = 20;//如果p的值是NULL，就会有问题    
	free(p); 
}
