
#include<stdio.h>

#if 0
//���������

//λ������
//&��λ�� |��λ�� ^��λ���

int main()
{
	int num1 = 1;
	int num2 = 2;
	int a, b, c;
	a = num1 & num2;
	b = num1 | num2;
	c = num1 ^ num2;
	printf("a=%d,b=%d;c=%d\n", a, b, c);
}


//���ܴ�����ʱ����(����������)��ʵ���������Ľ���
int main()
{
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
//��һ�������洢���ڴ��еĶ�������1�ĸ���
//����1  ֻ������������
int main()
{
	int num = 16;
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	printf("�������е�1�ĸ���=%d\n", count);
	return 0;
}
//����2 ����ѭ��32��
int main()
{
	int num = 5;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("����������1�ĸ���=%d\n", count);
	return 0;
}
//����3
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num)//5    101    100
	{          //4    100    011
		count++;
		num = num&(num - 1);
	}
	printf("����������1�ĸ���=%d\n", count);
	return 0;
}
int main() 
{
	int a = -10;    
	int *p = NULL;    
	printf("%d\n", !2);    
	printf("%d\n", !0);    
	a = -a;    
	p = &a;    
	printf("%d\n", sizeof(a)); 
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//����д�в��У�    
	//printf("%d\n", sizeof int);//����д�в��У� 
	return 0; 
}
//sizeof��������������ͣ���ռ�ռ�Ĵ�С
void test1(int arr[]) 
{
	printf("%d\n", sizeof(arr));//(2) //4
} 
void test2(char ch[]) 
{    
	printf("%d\n", sizeof(ch));//(4)  //4
} 
int main() 
{    
	int arr[10] = {0};    
	char ch[10] = {0};    
	printf("%d\n", sizeof(arr));//(1) //40   
	printf("%d\n", sizeof(ch));//(3)  //10  
	test1(arr);    
	test2(ch);    
	return 0; 
}
#endif



