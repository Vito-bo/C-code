
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}

//int global = 2020; //ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2021;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//// �����ͱ���
//// �����еĶ���ö�ٳ���
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	100;//���泣��
//	const float f = 3.14f; //const ���εĳ���
//	//f = 2.5;
//	#define M 1000; //#define�ı�ʶ������
//	return 0;
//}

//// �ַ���
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h', 'e', 'l', 'l', 'o'};
//	char arr3[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//// ת���ַ�
//int main()
//{
//	//printf("c:\\code\\test.c\n");
//	//printf("\\a");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof("abcdef"));
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

////static���ξֲ�����
////����1
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//// ����2
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////static���ξֲ������ı��˱������������ڣ��þ�̬�ֲ�����������������Ȼ���ڣ�ֱ����������������ڲŽ�����

////define�����ʶ������
//#define MAX 1000
////define�����
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//// ָ��
//////�ڴ�
////int main()
////{
////	int num = 10;
////	&num;//ȡ��num�ĵ�ַ
////	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
////	return 0;
////}
//
////int main()
////{
////	//int num = 10;
////	//int *p = &num;
////	//*p = 20;
////	//printf("%d\n", num);
////	char ch = 'w';
////	char* pc = &ch;
////	*pc = 'q';
////	printf("%c\n", ch);
////	return 0;
////}
//
////ָ������Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//

//�ṹ��
struct Stu
{
	char name[10]; //����
	int age;       //����
	char sex[5];   //�Ա�
	char id[10];   //ѧ��
};
int main()
{
	struct Stu s = { "����", 20, "��", "20180101" };
	//.Ϊ�ṹ��Ա���ʲ�����
	printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
	//->������
	struct Stu *ps = &s;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);

}