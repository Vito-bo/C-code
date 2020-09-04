
//字符串+内存函数介绍2
#include <stdio.h>
#include <assert.h>
#include <string.h>
//长度受限制的字符串函数介绍

////strncpy
////拷贝num个字符从源字符串到目标空间
////如果源字符串的长度小于num,则拷贝完源字符串之后，在目标后边追加0，z直到num个
//int main()
//{
//	char str1[] = "To be or not to be";
//	char str2[40];
//	char str3[40];
//
//	strncpy(str2, str1, sizeof(str2));
//	strncpy(str3, str2, 5);
//	str3[5] = '\0';
//
//	puts(str1);
//	puts(str2);
//	puts(str3);
//	return 0;
//}
////模拟实现strncpy
////1,判断地址是否为空（使用断言）
////2.要保证目的字符串的长度足够，能够容纳源字符串的长度
////3.拷贝时dest会移动，而最终要返回的是拷贝字符串后的起始地址，因此要先保存dest的地址
//char *my_Strncpy(char *dest, const char *src, int count)
//{
//	char *p = dest;
//	assert(dest != NULL && src != NULL);
//	//断言dest不为空，src不为空
//	while (count)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	return p;
//}
//int main()
//{
//	char str1[] = "To be or not to be";
//	char str2[40];
//	char str3[40];
//
//	my_Strncpy(str2, str1, sizeof(str1));
//	my_Strncpy(str3, str2, 5);
//	str3[5] = '\0';
//
//	puts(str1);
//	puts(str2);
//	puts(str3);
//	return 0;
//}

//strncat字符串追加
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}
////模式实现strcat
//char *my_strcat(char *dest, char *src)
//{
//	char *ret = dest;
//	while (*dest){
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

////strncmp
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++){
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	}
//	return 0;
//}

//strstr
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	puts(pch);
//	return 0;
//}
//模拟实现strstr
char *my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char *cp = (char*)str1;
	char *substr = (char *)str2;
	char *s1 = NULL;
	if (*str2 == '\0')
		return NULL;
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}
int main()
{
	char str[] = "This is a simple string";
	char * pch;
	pch = my_strstr(str, "simple");
	puts(pch);
	return 0;
}