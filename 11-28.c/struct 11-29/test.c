#include<stdio.h>
#include<string.h>

#if 0
//����һ���ṹ������
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};

//����ṹ�����ͱ���
//1.�������ṹ�����ͣ��ٶ�������͵ı���
struct Student student1, student2;
// �ṹ��������     �ṹ�������
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};


//2.���������͵�ͬʱ���������
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}student1, student2;

//3.��ָ����������ֱ�Ӷ���ṹ�����ͱ���

struct
{
	��Ա�б�;
}�������б�;


//�ṹ������ĳ�ʼ��������
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[30];
	}a = {0303,"vitobo",'M',"113,xian lintong"};
	printf("NO:%ld\nname:%s\nsex:%c\nadder:%s\n", a.num, a.name, a.sex, a.addr);
	return 0;
}

//��������ѧ����ѧ�ţ������ͳɼ�������ɼ��ϸߵ�ѧ����ѧ�ţ������ͳɼ�

int main()
{
	struct Student//�����ṹ������
	{
		int num;
		char name[20];
		float score;
	}student1,student2;//���������ṹ�����
	scanf("%d%s%f", &student1.num, student1.name, &student1.score);
	scanf("%d%s%f", &student2.num, student2.name, &student2.score);
	printf("The highter score is:\n");
	if (student1.score > student2.score)
	{
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	}
	else if (student1.score < student2.score)
	{
		printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
	}
	else
	{
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
		printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
	}

	return 0;
}
//ע�⣺��scanf�������ڳ�Աstudent1.num��student1.score��ǰ�涼��ȡ��ַ��&������student1.nameǰ��û��&
//������Ϊname��������������ʹ����ַ���ʲ����ٻ���������ټ�һ��&

#endif

// ʹ�ýṹ������
//������3����ѡ�ˣ�ÿ��ѡ��ֻ��ͶһƱ����дһ��ͳ��ѡƱ�ĳ���
//�����뱻ѡ�˵����֣����������˵�Ʊ���

struct Person
{
	char name[20];    //��ѡ������
	int count;        //��ѡ�˵�Ʊ��
}leader[3] = {"wang",0,"gao",0,"zhou",0};//����ṹ�����鲢��ʼ��

int main()
{
	int i, j;
	char leader_name[20];//�����ַ�����
	for (i = 1; i <= 10; i++)
	{
		scanf("%s", leader_name);//������ѡ�ĺ�ѡ������
		for (j = 0; j < 3; j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}
	printf("\nResult:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
