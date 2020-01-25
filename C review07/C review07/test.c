#include<stdio.h>

//指针
#if 0
int main()
{
	int a = 10;//在内存中开辟一块空间
	int* p = &a;//对变量a，取出它的地址，可以使用&操作符
	            //将a的地址存放到在p变量中，p就是一个指针变量
	return 0;
}
//指针就是变量，用来存放地址的变量
//存放在指针的值都被当成地址处理


//指针类型
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
//指针的类型决定了指针向前或向后走一步有多大（距离）

//指针的解引用
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;
	*pi = 0;
	return 0;
}
//char* 的指针解引用只能访问一个字节，
//int* 的指针解引用能访问四个字节

//指针和数组
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}
//数组名代表数组首元素的地址

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };    
	int *p = arr; //指针存放数组首元素的地址    
	int sz = sizeof(arr) / sizeof(arr[0]);    
	int i = 0;    
	for (i = 0; i<sz; i++)    
	{        
		printf("%d ", *(p + i));    
	}    return 0; 
}
#endif

