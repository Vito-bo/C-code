#include<stdio.h>
#include<string.h>
/*
//1.
int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);
}
void main()
{
	fib(8);
	printf("%d", cnt);
}
//2.
int x = 1;
do{
	printf("%2d\n", x++);
} while (x--);//do whileѭ������ִ�����飬Ȼ������жϣ����ʽ��
//�������ٻ�ִ��ִ��һ��

//3.
int main()
{
	int i = 1;
	int j;
	j = i++;
	printf("%d,%d\n", i, j);//2 1
	return 0;
}
//i++��ʹ��i��ֵ����ֵ��j,��i=i+1


//4.
int main()

{
	int i = 10;
	int j = 20;
	int k = 3;
	k *= i + j;
	printf("%d\n", k);//90
	return 0;
}
//+�����ȼ����� *=
//k=k*(i+j)


//5.
int a = 1;
void test()
{
	int a = 2;
	a += 1;
}
int main()
{
	test();
	printf("%d\n", a);//1 ȫ�ֱ�����������������
	return 0;
}

//6.
int main()
{
	int a = 0, c = 0;
	do
	{
		--c;
		a = a - 1;
	} while (a>0);
	printf("%d\n", c);//-1 ����ִ��һ�Σ�c=-1,a=-1
	return 0;
}

//7.x �� y Ϊ double �ͣ���ִ�� x=2 �� y=x+3/2�� ��y��ֵΪ��
int main()
{
	double x, y;
	x = 2;
	y = x + 3 / 2;
	printf("%f", y);//3.000000
	return 0;
}

//8.�� �� for ѭ �� �� ִ �� �� �� ��?
int main()
{
	int x, y, count;
	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
	{
		count++;
	}
	printf("%d", count);// ѭ��4�Σ�y=123��ֵ��䣬Ϊ��
	return 0;
}
//a && b,һ�ٱؼ�,����Դ�������//9.���ж�����䣺 int year=1009 ��*p=&year ���²���ʹ����year�е�ֵ����1010�������?
//A   *p += 1;  *�����ȼ����� +=�� �����Ƚ�����P�õ�1009 Ȼ��+1=1010
//B  (*p)++;    ()�����ȼ�����++�� �����Ƚ�����P�õ�1009 Ȼ��+1=1010
//C  ++(*p);    ()�����ȼ�����++�� �����Ƚ�����P�õ�1009 Ȼ��+1=1010
//D  *p++;      ++�����ȼ�����*�� ����P++����ַ+1�������ú��ܵõ�1010//10.������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С��������
//��������������A��B�����A��B����С��������

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i = 1;
	int ret = 0;
	while (1)
	{
		if (((i*a) % b) == 0)
		{
			ret = i*a;
			break;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", ret);
	return 0;
}
*/

//11.��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I

//���ַ�����ch��n���ַ�����
void invert(char *ch, int n)
{
	int i;
	char temp;
	for (i = 0; i<n / 2; i++)
	{
		temp = ch[i];
		ch[i] = ch[n - 1 - i];
		ch[n - 1 - i] = temp;
	}
}

//�ֽ��ַ���ȫ�����ã������ú���ַ��������ַ��������á������ַ����Ļ�������Ϊ�Ƿ��пո�
void wordInvertInSentence(char*ch)
{
	int i = 0;
	int len;
	len = strlen(ch);
	invert(ch, len);//���ַ���ȫ������
	while (ch[i] != '\0')//���ַ�����ʼλ�ÿ�ʼ������ֱ�����ʵ�������
	{
		i = 0;
		while (ch[i] != ' '&&ch[i] != '\0'){ i++; }//�����ǰ���ַ���Ϊ�ո���û�з��ʵ�������־����ָ����ƣ�ֱ����ǰ�ַ�Ϊ�ո�
		invert(ch, i);//�ַ���ch��i���ַ���������
		if (ch[i] != '\0')//���û�з��ʵ�������־��Ҫ�����ո��ַ������������¸�����
			ch = ch + i + 1;
		else           //�����ǰ�ַ��Ѿ��ǽ�����־�ˣ�����Ҫ�������ո��ַ�����ѭ��������
			ch = ch + i;
	}
}

int main()
{
	char str[] = "I like beijing.";//
	wordInvertInSentence(str);
	printf("%s", str);
	printf("\n");
	return 0;
}
