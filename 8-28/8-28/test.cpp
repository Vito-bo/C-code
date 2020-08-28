#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0; ///计数
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break; //不是素数，跳出当前循环
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count==%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
//void Show(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//Show(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	Show(arr, len);
//	return 0;
//}
//
//int main()
//{
//	int i = -1;
//	printf("%d\n", i << 1); ///-2
//	printf("%d\n", i >> 1);//-1
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 1)
//		{
//			continue;
//		}
//		printf("HELLO\n");
//	}
//	return 0;
//}

int main()
{
	int i = 1;
    w_go:i++;
	if (i < 5)
		goto w_go;
	else
		printf("%d ", i); //5
	return 0;
}