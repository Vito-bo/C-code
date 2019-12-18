#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//void rotate_left(char* str, int k)
//{
//	assert(str);
//
//	while (k--)
//	{
//		char tmp = *str;
//		char* cur = str;
//		while (*(cur + 1) != '\0')
//		{
//			*cur = *(cur + 1);
//			++cur;
//		}
//		*cur = tmp;
//	}
//}
//
//int main()
//{
//	char a[] = "ABCDE";
//	printf("%s\n", a);
//
//	rotate_left(a, 3);
//
//	printf("%s\n", a);
//
//	return 0;
//}

//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		++left;
//		--right;
//	}
//}
//
//void rotate_left(char* str, int k)
//{
//	assert(str);
//
//	// ABCDE
//	int len = strlen(str);
//	// k len-k
//	//[0,k-1][k,len-1]
//	reverse_str(str, str + k - 1);
//	reverse_str(str+k, str + len - 1);
//
//	reverse_str(str, str + len - 1);
//}
//
//int main()
//{
//	char a[] = "ABCDE";
//	printf("%s\n", a);
//
//	rotate_left(a, 3);
//
//	printf("%s\n", a);
//	return 0;
//}

//int is_rotate_str(char* str, char* rt_str)
//{
//	int len = strlen(str);
//	char* double_str = (char*)malloc(len * 2 + 1);
//	strcpy(double_str, str);
//	strcat(double_str, str);
//	/*if (strstr(double_str, rt_str) != NULL)
//	{
//		free(double_str);
//		return 1;
//	}
//	else
//	{
//		free(double_str);
//
//		return 0;
//	}*/
//
//	int ret = strstr(double_str, rt_str) == NULL ? 0 : 1;
//	free(double_str);
//	return ret;
//}
//
//int main()
//{
//	printf("%d\n", is_rotate_str("AABCD", "BCDAB"));
//
//	return 0;
//}

//void print_once_num(int* a, int n)
//{
//	assert(a);
//	int ret = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		ret ^= a[i];
//	}
//
//	// ret����ֻ����һ�ε����������Ľ��
//	int pos = 0;
//	for (; pos < 32; ++pos)
//	{
//		if (ret & (1<<pos))
//		{
//			break;
//		}
//	}
//
//	// ret�ĵ�posλΪ1
//	int ret0 = 0, ret1 = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (a[i] & (1 << pos)) // posλ1
//		{
//			ret1 ^= a[i];
//		}
//		else // posλ0
//		{
//			ret0 ^= a[i];
//		}
//	}
//
//	printf("%d, %d\n", ret0, ret1);
//}
//
//int main()
//{
//	int a[] = { 2, 3, 4, 2, 5, 4, 5, 6, 8, 8, 6 ,1, 6, 6};
//	print_once_num(a, sizeof(a) / sizeof(int));
//
//	return 0;
//}

int main()
{
	int total = 0;  // �ܹ�����ˮ��
	int money = 20; // �����Ǯ
	int empty = 0;  // ��ƿ�ӵ�����
	scanf("%d", &money);

	// ��ʼ����ˮ
	total = money; // ��
	empty = money;
	while (empty > 1)
	{
		// ����ˮ + ��
		total += empty / 2;
		// ����ʣ�µĿ�ƿ������
		empty = empty / 2 + empty % 2;
	}

	printf("�ȵ���ˮ������%d\n", total);

	return 0;
}