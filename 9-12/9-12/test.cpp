
//龙旗控股笔试考题-C语言

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

////1.
//int main()
//{
//	char str[] = "Welcome to shanxi";
//	int Array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	char *p = str;
//	int  n;
//	printf("%d\n", strlen(str));//17
//	printf("%d\n", sizeof(str));//18
//	printf("%d\n", sizeof(Array));//36
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(n));//4
//	return 0;
//}

////2.观察下列程序运行时是否会出现问题？
//#define MAX_SIZE 255
//int main()
//{
//	unsigned char buff[MAX_SIZE + 1];
//	unsigned char i;
//	for (i = 0; i <= MAX_SIZE; i++)
//	{
//		buff[i] = i;
//		printf("%d\n", buff[i]);
//	}
//	return 0;//程序死循环，无符号char型数据范围0~255
//}

////4.
//void GetMemory(char *p)
//{
//	p = (char*)malloc(57);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "51 C++");
//	printf(str);
//	return 0;
//}
////程序崩溃，因为GetMemory函数并能不传递动态内存，
////main函数中的str一直都是NULL，strcpy()将使程序崩溃
////执行GetMemory之后，p得到新分配的空间地址，str依然是NULL，
////没有对内存进行free(),局部变量存在栈区，malloc在堆区，
////局部变量在函数执行完毕之后回收栈空间

////5.
//char* GetMemory(void)
//{
//	char p[] = "http-mv";
//	return p;
//}
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	puts(str);
//	return 0;
//}
////GetMemory中的p[]为函数内的局部变量，在函数返回后，内存已经被释放。
////执行str=GetMemory()语句后，str不再是NULL指针，但是str的内容不是"http-mv",而是垃圾
//
////3.
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(57);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "vip.com");
//	puts(str);
//	return 0;
//}
////能够输出vip.com，内存泄漏
////将动态分配内存的指针赋值给str指针，但GetMemory()函数中未检查分配失败的情况
////if(*p == NULL){};
////没有对分配的内存进行回收free();

////4.
//int main()
//{
//	char *str = (char *)malloc(57);
//	strcpy(str, "51CC");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "C++");
//		printf(str);
//	}
//	return 0;
//}
////篡改动态内存区的内容，后果难以预测，非常危险
////因为free(str)之后，str成为野指针，if(str!=NULL)语句不起作用
////应该在free(str)之后将str赋值为空 str=NULL
//
//5.代码实现8bit数据的指定位的置0或者置1，并保持其他位不变
char bit_set(unsigned char *p_data, unsigned char pos, int flag)
{
	assert(p_data);
	if (flag == 1)
	{
		*(p_data) |= (1 << (pos - 1));
	}
	else if (flag == 0)
	{
		*(p_data) &= ~(1 << (pos - 1));
	}
	return *p_data;
}

int main()
{
	unsigned char num1 = 15;//1111
	unsigned char ret1 = bit_set(&num1, 3, 0);//11
	printf("%d\n", ret1);
	unsigned char num2 = 11;
	unsigned char ret2 = bit_set(&num2, 3, 1);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}

//6.字符串右移函数
void severse(char *p, char *q)       //字符串翻转
{
	char temp;
	assert(p);
	assert(q);
	while (p<q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}
void RightLoopMove(char *pstr, unsigned short steps)
{
	int len = strlen(pstr);
	severse(pstr, pstr + len - steps - 1);       //前部分翻转
	severse(pstr + len - steps, pstr + len - 1);   //后部分翻转
	severse(pstr, pstr + len - 1);             //整体翻转
}
int main()
{
	char arr[] = "abcdefghi";
	RightLoopMove(arr, 2);
	printf("%s\n", arr);
	return 0;
}
