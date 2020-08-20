
//数组

#include <stdio.h>
#include <stdlib.h>

//一维数组
//数组是一组相同类型元素的集合
//
//int arr1[10] = { 1, 2, 3 };
//int arr2[] = { 1, 2, 3, 4 };
//char ch1[3] = { 'a', 98, 'c' };
//char ch2[] = { 'a', 'b', 'c' };
//char ch3[] = "abcdef";
//
//int main()
//{
//	int arr[10] = { 0 }; // 数组的不完全初始化
//	int len = sizeof(arr) / sizeof(arr[0]); //计算数组中的元素个数
//	//对数组内容进行赋值，数组是使用下标来访问的，下标从0开始。
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

////一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
////数组在内存中是来纳许存放的
//

////二维数组
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
////二维数组在内存中也是连续存储的
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

//数组名是数组首元素的地址（两个例外）
//1.sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示的是整个数组
//2.&数组名，取出的是数组的地址。&数组名，数组名表示整个数组

//冒泡排序
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