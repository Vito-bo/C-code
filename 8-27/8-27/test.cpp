
//调试技巧
#include <stdio.h>

////求 1！+2！+3！ ...+ n! ；不考虑溢出。
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	//int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j; //ret调用上一次的结果
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////程序死循环，
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
////模拟实现strcpy
//char* my_strcpy(char* dst, const char* src)
//{
//	char *cp = dst;
//	assert(dst && src);
//
//	while (*cp++ = *src++)
//		;
//	return dst;
//}

////const的作用
////代码1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int *p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int *const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//int main()
//{
//	//测试无cosnt的
//	test1();
//	//测试const放在*的左边
//	test2();
//	//测试const放在*的右边
//	test3();
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	//assert(str != NULL);
	while (*str)//判断字符串是否结束
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	const char* p = "abcdef";
	//测试
	int len = my_strlen(p);
	printf("len = %d\n", len);
	return 0;
}