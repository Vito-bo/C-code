
//�ַ���+�ڴ溯������2
#include <stdio.h>
#include <assert.h>
#include <string.h>
//���������Ƶ��ַ�����������

////strncpy
////����num���ַ���Դ�ַ�����Ŀ��ռ�
////���Դ�ַ����ĳ���С��num,�򿽱���Դ�ַ���֮����Ŀ����׷��0��zֱ��num��
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
////ģ��ʵ��strncpy
////1,�жϵ�ַ�Ƿ�Ϊ�գ�ʹ�ö��ԣ�
////2.Ҫ��֤Ŀ���ַ����ĳ����㹻���ܹ�����Դ�ַ����ĳ���
////3.����ʱdest���ƶ���������Ҫ���ص��ǿ����ַ��������ʼ��ַ�����Ҫ�ȱ���dest�ĵ�ַ
//char *my_Strncpy(char *dest, const char *src, int count)
//{
//	char *p = dest;
//	assert(dest != NULL && src != NULL);
//	//����dest��Ϊ�գ�src��Ϊ��
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

//strncat�ַ���׷��
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
////ģʽʵ��strcat
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
//ģ��ʵ��strstr
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