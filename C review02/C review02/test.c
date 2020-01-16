
#include <stdio.h>

#if 0
//分支和循环语句

//分支语句 if switch

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}
	else if (age>=18 && age<30)
	{
		printf("青年\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("中年\n");
	}
	else if (age >= 50 && age < 80)
	{
		printf("老年\n");
	}
	else
	{
		printf("老不死\n");
	}
	return 0;
}

int IsPrime(int i)
{
	if (i % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (IsPrime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

int main()
{
	int day = 0;
	switch (day)
	{
	    case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
	}
	return 0;
}
//在循环中只要遇到break，就停止后期的所有的循环，直接终止循环

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}
#endif

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}






































































//循环语句 while for do while

