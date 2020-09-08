
//动态内存管理
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
////void *malloc(size_t size);
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[100] = { 0 };
//
//	int *ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr){
//		int i = 0;
//		for (i = 0; i < num; i++){
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr); //释放ptr所指向的动态内存
//	ptr = NULL;
//	return 0;
//}

////void *free(void* ptr);
////void *calloc(size_t num, size_t num);
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////void* realloc (void* ptr, size_t size);
//int main()
//{
//	int *ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	//代码1
//	ptr = (int*)realloc(ptr, 1000);
//	//代码2
//	int*p = NULL;
//	p = (int*)realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//
//}

////常见的动态内存错误
////1.对NULL指针的解引用
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}
////2.对动态开辟空间的越界访问
//int main()
//{
//	int i = 0;
//	int * p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p){
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++){
//		*(p + i) = i; //当i是10的是偶访问越界
//	}
//	free(p);
//}
////3.对非动态内存使用free释放
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);  //非法释放
//	return 0;
//}
////4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int *p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//	return 0;
//}
////5.对同一块内存多次释放
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//重复释放
//	return 0;
//}
////6.动态内存忘记释放（内存泄漏）
//void test()
//{
//	int *p = (int *)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}//忘记释放不再使用的动态开辟的空间会造成内存泄漏。
//int main()
//{
//	test();
//	while (1);
//}
////笔试题1
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//解引用空指针，会导致程序崩溃
//没有对内存进行回收free(),局部变量存在栈区，malloc()在堆区;局部变量在函数执行完毕之后回收栈空间
//int main()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	puts(str);
//}
////笔试题2
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	puts(str);
//	return 0;
//}
////打印乱码：p指向“栈内存”，调用函数之后栈内存释放，但str仍指向栈区地址，
////造成内存泄漏，该栈区可能用作其它用途，存储其它内容。
////笔试题3
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	puts(str);
//	return 0;
//}
//输出hello，内存泄漏
//将动态分配的内存的指针赋值给str指针；但GetMemory()函数中未检查分配失败的情况；if(*p==NULL){   };
//没有对分配的内存进行回收free()；
int main()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		puts(str);
	}
	return 0;
}
//篡改动态内存区的内容，后果难以预料，非常危险。
//因为free(str); 之后，str 成为野指针，if(str != NULL)语句不起作用。
//应在free(str)之后将str赋值为空 str = NULL;

