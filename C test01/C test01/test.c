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
} while (x--);//do while循环，先执行语句块，然后进行判断（表达式）
//语句块至少会执行执行一次

//3.
int main()
{
	int i = 1;
	int j;
	j = i++;
	printf("%d,%d\n", i, j);//2 1
	return 0;
}
//i++先使用i的值，赋值给j,再i=i+1


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
//+的优先级高于 *=
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
	printf("%d\n", a);//1 全局变量作用与整个程序
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
	printf("%d\n", c);//-1 语句块执行一次，c=-1,a=-1
	return 0;
}

//7.x 和 y 为 double 型，则执行 x=2 ； y=x+3/2； 后y的值为？
int main()
{
	double x, y;
	x = 2;
	y = x + 3 / 2;
	printf("%f", y);//3.000000
	return 0;
}

//8.以 下 for 循 环 的 执 行 次 数 是?
int main()
{
	int x, y, count;
	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
	{
		count++;
	}
	printf("%d", count);// 循环4次，y=123赋值语句，为真
	return 0;
}
//a && b,一假必假,结合性从左至右//9.若有定义语句： int year=1009 ，*p=&year 以下不能使变量year中的值增至1010的语句是?
//A   *p += 1;  *的优先级大于 +=， 所以先解引用P得到1009 然后+1=1010
//B  (*p)++;    ()的优先级大于++， 所以先解引用P得到1009 然后+1=1010
//C  ++(*p);    ()的优先级大于++， 所以先解引用P得到1009 然后+1=1010
//D  *p++;      ++的优先级大于*， 所以P++，地址+1，解引用后不能得到1010//10.正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。
//输入两个正整数A和B。输出A和B的最小公倍数。

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

//11.将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I

//将字符数组ch中n个字符逆置
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

//现将字符串全部逆置，将逆置后的字符串部分字符串再逆置。部分字符串的划分依据为是否有空格
void wordInvertInSentence(char*ch)
{
	int i = 0;
	int len;
	len = strlen(ch);
	invert(ch, len);//将字符串全部逆置
	while (ch[i] != '\0')//从字符串起始位置开始遍历，直到访问到结束符
	{
		i = 0;
		while (ch[i] != ' '&&ch[i] != '\0'){ i++; }//如果当前的字符不为空格并且没有访问到结束标志，让指针后移，直到当前字符为空格。
		invert(ch, i);//字符串ch中i个字符进行逆置
		if (ch[i] != '\0')//如果没有访问到结束标志，要跳过空格字符，继续访问下个单词
			ch = ch + i + 1;
		else           //如果当前字符已经是结束标志了，不需要再跳过空格字符，外循坏结束。
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
