#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
1���������û�г�ʼ������ôĬ��ֵΪ���ֵ��(�ֲ�����)
2�����飬�ṹ��...  �ۺ����͡����帳ֵ��ֻ��һ�λ��ᣬ
		�����ڳ�ʼ����ͬʱ��
3���ֲ������飬����ʲôʱ��ȷ����С�ģ������ʱ��
						  ʲôʱ������ڴ棿          ����
						  ���������ڴ棿          1M/2M  ջ�Ĵ�С
4��[����]
*/
#define SIZE 10
int main()
{
	//const int a  =10;//������
	int arr1[10] = {1,2,3,45,5};
	//int arr2[SIZE] = {1,2};//8-->0

	printf("hello\n");
	//arr[1] = 2;
	//��������帳ֵ��ֻ��һ�λ��ᣬ�����ڳ�ʼ����ͬʱ
	//arr = {11,12,13,14,15,16,17,18,19,20};
	//int arr2[10];
	//arr2 = arr; error
	return 0;
}




#if 0
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//2^5->   2*2^4 ->  2*2*2^3->2*2*2*2^2->2*2*2*2*2^1
//->2*2*2*2*2*2^0  
int MyPow(int n,int k)
{
	if(k == 0)
	{
		return 1;
	}
	return n * MyPow(n,k-1);
}
/*
3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ�������
���������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9��
���ĺ���19
1729
1729%10 = 9;
*/
int DigitSum(unsigned int n)
{
	if(n > 9)
	{
		return DigitSum(n/10) + n%10;
	}
	return n;
}
/**
4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
*/
int MyStrlen(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;//1 
		str++;//str = str+1;
		//str+1;
	}
	return count;
}
void ReverseString(char * str)
{
	int len = MyStrlen(str);
	char tmp = *str;
	*str = *(str+len-1);
	*(str+len-1) = '\0';
	if(MyStrlen(str+1) >= 2)
	{
		ReverseString(str+1);
	}
	*(str+len-1) = tmp;
}
int main()
{
	char str[] = "abcdef";
	ReverseString(str);
	printf("%s\n",str);

	/*int ret = DigitSum(2729);
	printf("%d\n",ret);*/
	return 0;
}


int MyStrlen(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;//1 
		str++;//str = str+1;
		//str+1;
	}
	return count;
}
int MyStrlen2(char *str)
{
	if(*str == '\0')
	{
		return 0;
	}
	return 1+strlen(str+1);
}
int count = 0;
int Fabonaci1(int n)
{
	if(n==1 || n == 2)
	{
		return 1;
	}
	if(n == 3)
	{
		count++;
	}
	return Fabonaci1(n-1)  + Fabonaci1(n-2);
}
int Fabonaci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;//����������������������
	int i = 0;
	for(i = 3;i <= n;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int JumpFloor1(int n)
{
	if(n == 1)
	{
		return 1;
	}
	if(n == 2)
	{
		return 2;
	}
	return JumpFloor1(n-1) + JumpFloor1(n-2);
}
int JumpFloor(int n)
{
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	int i = 0;
	if(n == 1)
	{
		return f1;
	}
	if(n == 2)
	{
		return f2;
	}
	for(i = 3;i <= n;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	//int ret = Fabonaci(2);
	/*printf("%d\n",Fabonaci(1));
	printf("%d\n",Fabonaci(2));
	printf("%d\n",Fabonaci(3));*/
	printf("%d\n",JumpFloor(3));
	//printf("count = %d\n",count);
	//char *p = "hello";//�ַ���   "bit"
	//int len = MyStrlen2(p);
	//printf("%d\n",len);
	return 0;
}
#endif