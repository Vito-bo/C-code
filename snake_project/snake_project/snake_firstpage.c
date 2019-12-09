#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>//_getch�����ڴ�ͷ�ļ��У�
#include <stdlib.h>
#include "againSnake.h"//�Խ�ͷ�ļ�Ӧ����.h��β��
#define  SNAKE_LENGTH 20

#include <windows.h>
#include  <MMSystem.h>
#pragma comment (lib,"winmm.lib")

typedef int BOOL;//bool�����Զ��壻
#define TURE 1
#define FALSE 0

void FirstPage(); 
void BackgroundMusic();
void StartInput();
void BackgroundGame2 ();
void RandSnake();
void DrawSnake();
void ControlSnakeMove();
void ClearBeforeSnake();
void GetKeyDirect();
BOOL SnakeDie();
void DieAgain();
void FoodProduce();
void SnakeChange();
int arraySnake[SNAKE_LENGTH][3]={0};//�������洢�����ڵĶ������ڲ�����洢X\Y\�˶�����
int X,Y,FX,FY;
int flag ;
int a;
//������
int main()
{
	FirstPage();//�Խ��溯�������߼�����
	BackgroundMusic();
	StartInput();
	RandSnake();
	
	while(1)
	{
		system("cls");
		//strncpy(&BackgroundBlock[15][0],"��",2);
		FoodProduce(); 
		GetKeyDirect();
		SnakeDie();
		DieAgain();
		if(1==flag)
		{
			flag=0;
			PlaySound(NULL,0,0);
			break;
		}
	    ControlSnakeMove();
		SnakeChange();
		BackgroundGame2();

		Sleep(1500);//������<Windows.h>���ͷ�ļ��У������������ͷ�ļ���
	}
	system("pause");//���д��������ͷ�ļ�<stdlib.h>���У�
	return 0;
} 
//�׽���
void FirstPage()
{
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t   ����ӭ����̰�������硶\n");
	printf("\t\t\t \t    �����ո����ʼ��Ϸ��\n");
	printf("\t\t\t\t��ͨ��w a s d�����ߵ��˶���\n");//\t�����൱��tab��
}
//�������ֵ���
void BackgroundMusic()
{
	PlaySound("start.wav",NULL,SND_FILENAME|SND_ASYNC);//�˴����ֲ�Ӧ�ô����·��������ͨ�����ַ�ʽ���ı�һЩ��Ϸ�Ľ��棻
}
//���ո����벢��ʼ��Ϸ
void StartInput()
{
	char StartGame;
	while(1)
	{
		StartGame=_getch();
		if(' '==StartGame)
		{
			PlaySound(NULL,0,0);//ע��˴�PlaySound�Ĳ������ͣ�
			break;
		}
	}
	system("cls");//��������̨��
	printf("��Ϸ������ʼ>>>>>\n");
}
//������ʼ�������
void RandSnake()
{
	srand((unsigned int)time(NULL));//��ϵͳ�ĵ�ǰʱ����ȷ��������ӣ�һ�����з���int��һ�����޷���int����Ҫǿ��ת����
	X=rand()%19+1;
 	Y=rand()%18+1;
	//��ʼ�ߵ��������壻
	arraySnake[0][0]=Y;
	arraySnake[0][1]=X*2;
	arraySnake[0][2]=ToLeft;

	arraySnake[1][0]=Y;
	arraySnake[1][1]=X*2+2;
	arraySnake[1][2]=ToLeft;

	arraySnake[2][0]=Y;
	arraySnake[2][1]=X*2+4;
	arraySnake[2][2]=ToLeft;
	DrawSnake();
}

void DrawSnake()
{
	int j;
	for(j=0;arraySnake[j][0]!=0;j++)
	{
		strncpy(&BackgroundBlock[arraySnake[j][0]][arraySnake[j][1]],"��",2);//���ַ����Ĵ����һ������һ���ǵ�ַ��ָ��
	}
}

void ControlSnakeMove()//ע��˴�ʹ�õ��߼������ﵽ��ʵʱ�ƶ���Ч����
{
	int k;
	ClearBeforeSnake();
	for(k=SNAKE_LENGTH;k>=1;k--)
	{
		if(0==arraySnake[k][0])//���������������ƣ�����߳����ִ��Ч�ʣ�
		{
			continue;
		}
		arraySnake[k][0]=arraySnake[k-1][0];//���߼�
		arraySnake[k][1]=arraySnake[k-1][1];
		arraySnake[k][2]=arraySnake[k-1][2];
	}

	arraySnake[0][2]=SnakeDirect;//���̼�����ͷʵʱ���ƣ�

	if(ToLeft==arraySnake[0][2]||ToRight==arraySnake[0][2])//������ͷ������ƶ� ��
	{
		arraySnake[0][1]+=arraySnake[0][2];
	}
	else if(ToUp==arraySnake[0][2]||ToDown==arraySnake[0][2]) 
	{
		arraySnake[0][0]+=arraySnake[0][2];
	}
	DrawSnake();
}

void ClearBeforeSnake()//���֮ǰ������
{
	int n;
	for(n=0;arraySnake[n][0]!=0;n++)
	{
		strncpy(&BackgroundBlock[arraySnake[n][0]][arraySnake[n][1]],"  ",2);//���ַ����Ĵ����һ������һ���ǵ�ַ��ָ��
	}
}

void GetKeyDirect()//���̼�⺯��:�첽��ͬ����ѡ������
{
	flag_1=1;
	flag_2=1;
	flag_3=1;
	flag_4=1;
	if(GetAsyncKeyState('W'))
	{
		if(ToDown!=arraySnake[0][2])//bug�������ƣ�
		{
			SnakeDirect=ToUp;
			flag_1=0;
		}
	}
	else if(GetAsyncKeyState('A'))
	{
		if(ToRight!=arraySnake[0][2])
		{
			SnakeDirect=ToLeft;
			flag_2=0;
		}
	}
	else if(GetAsyncKeyState('S'))
	{
		if(ToUp!=arraySnake[0][2])
		{
			SnakeDirect=ToDown;
			flag_3=0;
		}
	}
	else if(GetAsyncKeyState('D'))
	{
		if(ToLeft!=arraySnake[0][2])
		{
			SnakeDirect=ToRight;
			flag_4=0;
		}
	}
}

BOOL SnakeDie()//�ߵ�������ײ�жϣ�
{
	if(ToLeft==arraySnake[0][2]||ToRight==arraySnake[0][2])
	{
		if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]],"��",2))
		{
			if(flag_1&&flag_2)
			{
				return FALSE;
			}
		}
	}
	else if(ToUp==arraySnake[0][2]||ToDown==arraySnake[0][2]) 
	{
		if(0==strncmp(&BackgroundBlock[arraySnake[0][0]+arraySnake[0][2]][arraySnake[0][1]],"��",2))
		{
			if(flag_3&&flag_4)
			{
				return FALSE;
			}
		}	
	}
	//if(ToLeft==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]-1],"��",2))
	//	{
	//		return FALSE;  
	//	}
	//}
	//if(ToRight==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]+1],"��",2))
	//	{
	//		return FALSE;
	//	}
	//}
	//if(ToUp==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]-1][arraySnake[0][1]+arraySnake[0][2]],"��",2))
	//	{
	//		return FALSE;
	//	}
	//}
	//if(ToDown==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]+1][arraySnake[0][1]+arraySnake[0][2]],"��",2))
	//	{
	//		return FALSE;
	//	}
	//}
	return TURE;
} 

void DieAgain()
{
	int m;
	m=SnakeDie();
	if(FALSE==m)
	{
		printf("You Are False\n");
		//PlaySound("add.wav",NULL,SND_FILENAME|SND_ASYNC);//�������ļ�����Ӧ��ע��·�������⣻
		flag=1;
	}
}

void FoodProduce()//����ʳ�
{
	BOOL PFLAG=TURE;

	if(TURE==ReFoodProduce)
		{
			return ;//�Ƿ���Ҫ��ǰ����ʳ������ĺ�����
		}

	srand((unsigned int)time(NULL));
	while (1)
	{	
		FX=rand()%21+1;
		FY=rand()%18+1;
		for(a=0;arraySnake[a][0]!=0;a++)
		{
			if(FX*2==arraySnake[a][1])//��ֹʳ���������غϣ�&&FY==arraySnake[a][0]
			{
				PFLAG=FALSE;
				break;
			}
		}
		if(TURE==PFLAG)
			{
				strncpy(&BackgroundBlock[FY][FX*2],"��",2);//ʳ��������ӡ����Ļ�ϣ�
				ReFoodProduce=TURE;
				break;
			}
	}
}

//***�߳Ե�ʳ��ʱ�������߼���
void SnakeChange()
{
 	if((FX*2)==arraySnake[0][1])// & FY==arraySnake[0][0]
	{
		ReFoodProduce=FALSE;
		if(ToLeft==arraySnake[SnakeEnd][2])
		{
			arraySnake[SnakeEnd+1][0]=arraySnake[SnakeEnd][0];//��ͨ���򵥵ĸ�ֵ�����ʵ������䳤��
			arraySnake[SnakeEnd+1][1]=arraySnake[SnakeEnd][0]+2;
			arraySnake[SnakeEnd+1][2]=arraySnake[SnakeEnd][0];
		}
		else if(ToRight==arraySnake[SnakeEnd][2])
		{
			arraySnake[SnakeEnd+1][0]=arraySnake[SnakeEnd][0];
			arraySnake[SnakeEnd+1][1]=arraySnake[SnakeEnd][0]-2;
			arraySnake[SnakeEnd+1][2]=arraySnake[SnakeEnd][0];
		}
		else if(ToUp==arraySnake[SnakeEnd][2])
		{
			arraySnake[SnakeEnd+1][0]=arraySnake[SnakeEnd][0]+1;
			arraySnake[SnakeEnd+1][1]=arraySnake[SnakeEnd][0];
			arraySnake[SnakeEnd+1][2]=arraySnake[SnakeEnd][0];
		}
		else if(ToDown==arraySnake[SnakeEnd][2])
		{
			arraySnake[SnakeEnd+1][0]=arraySnake[SnakeEnd][0]-1;
			arraySnake[SnakeEnd+1][1]=arraySnake[SnakeEnd][0];
			arraySnake[SnakeEnd+1][2]=arraySnake[SnakeEnd][0];
		}
		SnakeEnd++;//ÿ�ν��뵽�����ʱ��֤�����Ѿ��������ʼ�¼��һ�ڣ�
	}
}


//BOOL ReSnakeDie()//����ײ������޸�
//{
//	int edge_1,edge_2,edge_3;
//	for(edge_1=0;edge_1<48;edge_1++)
//	{
//		if(BackgroundBlock[SNAKE_LENGTH][edge_1]==arraySnake[0][1]&&BackgroundBlock[SNAKE_LENGTH][edge_1]==arraySnake[0][0])
//	}
//}

