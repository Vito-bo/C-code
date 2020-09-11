
//华为笔试题-C语言
#include <stdio.h>
#include <string.h>

/*
#define CHAR char
#define ULONG unsigned long
#define VOID void

CHAR *VOS_strncpy(CHAR *pcDest, const CHAR *szSrc, ULONG ulLength)
{
	CHAR *pcPoint = pcDest;
	if ((NULL == szSrc) || (NULL == pcDest))
	{
		return NULL;
	}
	while (ulLength && (*pcPoint = *szSrc))
	{
		pcPoint++;
		szSrc++;
		ulLength--;
	}
	if (!ulLength)
	{
		*pcPoint = '\0';
	}
	return pcDest;
}
VOID main(VOID)
{
	CHAR szStrBuf[] = "1234567890";
	CHAR szStrBuf1[] = "1234567890";
	strncpy(szStrBuf, "ABC", strlen("ABC"));     //将字符串"ABC"拷贝过去
	VOS_strncpy(szStrBuf1, "ABC", strlen("ABC"));//将字符串"ABC"拷贝过去，并带有'\0'
	printf("Str1 = %s\nStr2 = %s\n", szStrBuf, szStrBuf1);
}

struct BBB
{
	long lA1; //4
	char cA2; //1
	char cA3; //1+2
	long lA4; //4
	long lA5; //4
}*p;
int main()
{
	p = (struct BBB*)0x100000;
	printf("%p\n", p + 0x1);  //0X100010
	printf("%p\n", (unsigned long)p + 0x1 );//0X100001
	printf("%p\n",(unsigned long*)p + 0x1); //0X100004
	printf("%p\n", (char *)p + 0x1);///0X100001
	return 0;
}

//14.
int main()
{
	char c;
	unsigned char uc;
	unsigned short us;
	c = 128;
	uc = 128;
	us = c + uc;
	printf("0x%x\n", us); //

	us = (unsigned char)c + uc;
	printf("0x%x\n", us); //

	us = c + (char)uc;
	printf("0x%x\n", us);
	return 0;
}

//12.
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
	return 0;
}

//10.
#define N 4
#define Y(n) ((N+2)*n) 

int main()
{
	int z = 2 * (N + Y(5 + 1));
	printf("%d\n", z);
	return 0;
}
*/

