
#include<stdio.h>

#if 0
//数组

//数组是一组相同类型元素的集合
type_t arr_name[const_n]
//type_t 是指数组的元素类型
//const_n 是指一个常量表达式，用来指定数组的大小


int main() 
{
	int arr[10] = { 0 };//数组的不完全初始化    
	//计算数组的元素个数    
	int sz = sizeof(arr)/sizeof(arr[0]);    
	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：    
	int i = 0;//做下标    
	for(i=0; i<10; i++)    
	{        
		arr[i] = i;    
	}       
	//输出数组的内容    
	for(i=0; i<10; ++i)    
	{        
		printf("%d ", arr[i]);    
	}    
	return 0;
}
//数组是使用小标来访问的，下标是从0开始
//数组的大小可以通过计算得到

int main() 
{ 
	int arr[10] = { 0 };    
	int i = 0;    
	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)    
	{ 
		printf("&arr[%d] = %p\n", i, &arr[i]); 
	}    
	return 0; 
}
//数组在内存中是连续存放的


int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//二维数组在内存中也是连续存储的
#endif

//冒泡排序
void bubble_sort(int arr[], int sz)//参数接收数组元素个数 
{    
	int i = 0;
	for (i = 0; i<sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz - i - 1; j++)
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
	int i = 0;
	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//是否可以正常排序？    
	for (i = 0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}