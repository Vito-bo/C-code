
//�ṹ��
#include <stdio.h>
#include <string.h>

////�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//typedef struct Stu
//{
//	char name[20]; //����
//	int age;       //����
//	char sex[5];   //�Ա�
//	char id[20];   //ѧ��
//}Stu;
////�ṹ�ĳ�Ա�����Ǳ��������飬ָ�룬�����ṹ��
//
////�ṹ������Ķ���ͳ�ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1;		     //�������͵�ͬʱ�������p1
//struct Point p2; //����ṹ�����p2
//
////��ʼ��:���������ͬʱ����ֵ
//struct Point p3 = { 1, 2 };
// 
//Stu s = { "xiaohong", 20, "��", 8848 };//��ʼ��
//
//struct Node
//{
//	int data;
//	struct Piont p;
//	struct Node* next;
//}n1 = { 10, { 4, 5 }, NULL };			//�ṹ��Ƕ�׳�ʼ��
//
//struct Node n2 = { 20, { 5, 6 }, NULL };//�ṹ��Ƕ�׳�ʼ��

////�ṹ��Ա�ķ���
////�ṹ��������ʳ�Ա���ṹ�����ĳ�Ա��ͨ������������ʵ�
//struct Stu
//{
//	char name[20];
//	int age;
//};
//struct Stu s = { "zhaosi", 30 };
//int main()
//{
//	strcpy(s.name, "huahua");
//	printf("%s,%d\n", s.name, s.age); //ʹ��.���ʳ�Ա
//	return 0;
//}

////�ṹ��ָ�����ָ������ĳ�Ա
//struct Stu
//{
//	char name[20]; 
//	int age;
//};
//void Pint(struct Stu* ps)
//{
//	printf("name=%s age=%d\n", (*ps).name, (*ps).age);
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name=%s age=%d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "biaozi", 40 };
//	Pint(&s); // �ṹ���ַ����
//	return 0;
//}

//�ṹ�崫��
struct S
{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//�ṹ�崫��
void Print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void Print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	Print1(s);
	Print2(&s);
	return 0;
}
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
