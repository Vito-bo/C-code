#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*
一维数组：
	存放相同数据类型的数据的集合。数组的内存是连续的。int arr[10];
	数组定义之后，如果没有初始化，默认值为随机值。
	如果局部初始化，其他数据默认值为0；
	数组是，聚合类型。整体赋值 只有一次机会，在定义的同时。
注意事项：
	1、(局部)数组什么时候，确定大小？ 编译
	2、数组什么时候分配内存？      运行
	3、最多分配多大内存？     1M/2M

	数组名：意义-》代表数组首元素的地址

	sizeof():  求字节大小       但是：编译期间看表达式的结果将来会是神马类型
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr)/sizeof(arr[0]); 数组在哪里定义，
	在哪里使用

	数组名：意义-》代表数组首元素的地址
				两种情况下，代表整个数组：
				1、sizeof(arr) :代表整个数组的字节大小
				2、&arr+1 : 
一维数组使用：
冒泡排序：
选择排序：
直接插入排序：
shell排序(希尔)
快速排序：
堆排序：
归并排序：
计数排序-基数排序。。。
*/
void BubbleSort(int arr[],int len)
{
	int i = 0;
	int flg = 0;
	for(i = 0;i < len-1;i++)//趟数
	{
		int j = 0;
		flg = 0;//每一堂进来必须置为0
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
		if(flg == 0)//证明没有交换
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {12,4,6,9,11,78,32,21};//待排序序列
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
//数组的传参，如果传数组名过来，那么就会退化为指针
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
	//printf("%d\n",sizeof(arr[10]));//4   报错  

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

	//char arr1[5] = {'a','b','c','d','e'};//字符数组
	//char arr2[5] = "abcd";//默认有\0 //字符数组
	//char *p = "abcd";//字符串默认有\0
	//char arr3[] = "abcd";//长度为5   默认有\0
	//printf("%s\n",p);//abcde  打印字符串-》遇到\0停止打印


	//int count = 10;
	//int arr[count] = {1,2,3};
	//int arr2[10] = {1,2,3,4,5,6,7,8,9,0};
	//arr2 = {1,2,3,4,5,6,7,8,9,0};
	return 0;
}
#endif