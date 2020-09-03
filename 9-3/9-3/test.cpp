
//�ַ���+�ַ������Ľ���
#include <stdio.h>
#include <assert.h>
#include <string.h>

//strlen��ȡ�ַ�������
//strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�����(������'\0')
//����ָ����ַ�������Ҫ��'\0'������
//�����ķ���ֵΪsize_t,���޷��ŵ�
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
//	} //strlen��������ֵ���޷��ŵģ�������>0��
//	return 0;
//}
//ģ��ʵ��strlen
////����1����������ʽ
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
////����2����������ʱ����������,�ݹ����
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////����3��ָ��-ָ��ķ�ʽ
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

//strcpy �����ַ���
//Դ�ַ���������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
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

////ģ��ʵ��strcpy
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

//strcat �ַ���׷��
//Դ�ַ���������'\0'����
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
//Ŀ��ռ����ɱ�
//int main()
//{
//	char *str = "zilong";
//	char str1[50] = "mingli ";
//	strcat(str1, str);
//	printf("%s\n", str1);
//	return 0;
//}
////ģ��ʵ��strcat
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

//strcmp�ַ����Ƚ�
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//int main()
//{
//	char *str1 = "wangzilong";
//	char *str2 = "zhoushaolong";
//	int ret = strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}
//ģ��ʵ��strcmp
int my_strcmp(const char*str1, const char*str2)
{
	assert(str1);//���ԣ���ֹ���ݿ�ָ��
	assert(str2);
	int ret = 0;
	while ((*str1 != '\0') && (*str1 == *str2))//����ֻҪ��һ���ַ�����ָ������'\0'��ֹͣ�Ƚ�
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
