
#include <stdio.h>

#if 0
//��֧��ѭ�����

//��֧��� if switch

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����\n");
	}
	else if (age>=18 && age<30)
	{
		printf("����\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("����\n");
	}
	else if (age >= 50 && age < 80)
	{
		printf("����\n");
	}
	else
	{
		printf("�ϲ���\n");
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
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
	}
	return 0;
}
//��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ��

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






































































//ѭ����� while for do while

