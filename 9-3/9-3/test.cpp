
//字符串+字符函数的介绍
#include <stdio.h>
#include <assert.h>
#include <string.h>

//strlen获取字符串长度
//strlen函数返回的是在字符串中'\0'前面出现的字符个数(不包含'\0')
//参数指向的字符串必须要以'\0'结束、
//函数的返回值为size_t,是无符号的
//size_t strlen(const char* str);
//
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "wto";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("strlen(str2) > strlen(str1)");
//	}
//	else
//	{
//		printf("strlen(str2) < strlen(str1)");
//	} //strlen函数返回值是无符号的，所以是>0的
//	return 0;
//}
//模拟实现strlen
////方法1：计数器方式
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////方法2：不创建临时变量计数器,递归求解
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////方法3：指针-指针的方式
//int my_strlen(char* str)
//{
//	char *p = str;
//	while (*p != '\0')
//		p++;
//	return p - str;
//}
//int main()
//{
//	char *str = "hello world";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}

//strcpy 拷贝字符串
//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//int main()
//{
//	char str[20] = "nike adidas";
//	char str1[20];
//	char str2[40];
//	strcpy(str1, str);
//	strcpy(str2, "lebon jams");
//	printf("%s\n%s\n%s\n", str, str1, str2);
//	return 0;
//}

////模拟实现strcpy
//char *my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str[40] = "welcome to shanxi weinan";
//	char str1[40];
//	my_strcpy(str1, str);
//	printf("%s\n", str1);
//	return 0;
//}

//strcat 字符串追加
//源字符串必须以'\0'结束
//目标空间必须有足够的大，能容纳下源字符串的内容
//目标空间必须可变
//int main()
//{
//	char *str = "zilong";
//	char str1[50] = "mingli ";
//	strcat(str1, str);
//	printf("%s\n", str1);
//	return 0;
//}
////模拟实现strcat
//char* my_strcat(char *dest, const char* src)
//{
//	char *ret = dest;
//	assert(src);
//	assert(dest);
//	while (*dest){
//		dest++;
//	}
//	while ((*dest++ = *src++)){
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char *str = "zilong";
//	char str1[50] = "mingli ";
//	my_strcat(str1, str);
//	printf("%s\n", str1);
//	return 0;
//}

//strcmp字符串比较
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//int main()
//{
//	char *str1 = "wangzilong";
//	char *str2 = "zhoushaolong";
//	int ret = strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}
//模拟实现strcmp
int my_strcmp(const char*str1, const char*str2)
{
	assert(str1);//断言，防止传递空指针
	assert(str2);
	int ret = 0;
	while ((*str1 != '\0') && (*str1 == *str2))//这里只要有一个字符串的指针遇到'\0'就停止比较
	{
		str1++;
		str2++;
	}

	if (*str1 > *str2)
	{
		ret = 1;
	}
	else if (*str1 < *str2)
	{
		ret = -1;
	}
	else
	{
		ret = 0;
	}
	return ret;
}

int main()
{
	char *str1 = "wangzilong";
	char *str2 = "zhoushaolong";
	int ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	return 0;
}
