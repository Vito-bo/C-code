//��Ϸ�߿򱳾���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int BOOL;//bool�����Զ��壻
#define TURE 1
#define FALSE 0

#include <windows.h>
#define SNAKE_LENGTH 20
char BackgroundBlock[SNAKE_LENGTH][48]={"����������������������������������������������\n",            
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"��                                          ��\n",
										"����������������������������������������������\n"
			 
										};
void BackgroundGame2()
{
	int i;
	for(i=0;i<20;i++)
	{
		printf(BackgroundBlock[i]);//ע��printf�����������ʽ��
	}
}

//����ע�⣬С�����������ռһ�м�һ���ֽڣ������������ֽ����⣬���Գ��������е�Y����һ���ǣ�
enum SportTo{ToUp=-1,ToDown=1,ToLeft=-2,ToRight=2};//����һ��ö�����ͣ������������е��ƶ�����

int SnakeDirect=ToLeft;

BOOL ReFoodProduce=FALSE;//�ж��Ƿ���Ҫ���²���ʳ���ǣ�

//��ס�ߵ��ܳ��ȣ�
int SnakeEnd=2;

int flag_1=1,flag_2=1,flag_3=1,flag_4=1;


