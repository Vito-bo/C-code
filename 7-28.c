#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/**
1、不可以同时不写行数和列数
2、可以只写列数，编译器会根据你写的列数，确定行数。
3、二维数组的内存是连续的.二维数组是一个特殊的一维数组
*/
void UpAngle(int arr[][5],int row,int col)
{
	int i = 0;
	int count = 1;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			//if(i <= j)
			if(i >= j)
			{
				arr[i][j] = count++;
			}
		}
	}
}
void Show(int  (*arr)[5],int row,int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			//printf("%-2d ",arr[i][j]);
			printf("%-2d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
 void SymMatrix(int  (*arr)[5],int row,int col)
 {
	int i = 0;
	int count = 1;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			if(i <= j)
			{
				arr[i][j] = count++;
			}
			 arr[j][i] =  arr[i][j] ;
		}
	}
 }
int  main()
{
	int arr[5][5] = {0};
	SymMatrix(arr,5,5);
	Show(arr,5,5);
	return 0;
}


#if 0
//void Show(int  **arr,int row,int col)error
//void Show(int arr[][3],int row,int col)
void Show2(int  (*arr)[3],int row,int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			//printf("%-2d ",arr[i][j]);
			printf("%-2d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
void Show(int *arr,int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		//printf("%d ",arr[i]);//[]  自带解引用
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
int main()
{
	int arr[3] = {1,2,3};
	int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
	Show2(arr2,3,3);
	//Show(arr,3);
	/*char ch = 'a';
	char *pc = &ch;
	double d = 12.5;
	double *pd = &d;
	printf("%d,%d\n",pd,pd+1);*/
	//
	//int arr[3] = {1,2,3};
	////int *p = arr;
	////int (*p)[3] = &arr;

	//int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
	//int  (*p)[3] = arr2;//   一维数组的地址 指向数组的指针
	//int *  p[3];//指针数组
	//
	
	return 0;
}

void Show(int arr[][4],int row,int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			printf("%-2d ",arr[i][j]);
		}
		printf("\n");
	}
}
void InitArr(int arr[][4],int row,int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			arr[i][j] = i*4+j;
		}
	}
}
int main()
{
	int arr[3][4] = {0};//三行四列
	InitArr(arr,3,4);

	printf("%d,%d\n",arr[1][0],arr[0][4]);

	/*int i = 0;
	int j = 0;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%p ",&arr[i][j]);
		}
		printf("\n");
	}*/


	/*InitArr(arr,3,4);
	Show(arr,3,4);*/
	//int i = 0;
	//int j = 0;
	//for(i = 0;i < 3;i++)
	//{
	//	for(j = 0;j < 4;j++)
	//	{
	//		arr[i][j] = i*4+j;
	//	}
	//}
	
	//for(i = 0;i < 3;i++)
	//{
	//	for(j = 0;j < 4;j++)
	//	{
	//		printf("%-2d ",arr[i][j]);
	//	}
	//	///printf("\n");
	//}

	/*int arr2[2][2] = {1,2,3,4};
	int arr3[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int arr4[][3] = {{1,2},{4,5,6},{8,9}};
	
	int arr5[] = {1,2,3,4,5,6};*/

	return 0;
}


void SelectSort(int arr[],int len)
{
	int i = 0;
	for(i = 0;i < len-1;i++)
	{
		int j = 0;
		for(j = i+1; j < len;j++)
		{
			if(arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void InsertSort(int arr[],int len)
{
	int i = 0;
	int tmp = 0;
	int j = 0;
	for(i = 1;i < len;i++)
	{
		tmp = arr[i];
		for(j = i-1; j >= 0;j--)
		{
			if(arr[j] > tmp)
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = tmp;
	}
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

int main()
{
	int arr[] = {12,4,8,9,1,7,6,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	InsertSort(arr,len);
	Show(arr,len);
	return 0;
}
#endif
