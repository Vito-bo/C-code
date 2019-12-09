#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>//_getch包含在此头文件中；
#include <stdlib.h>
#include "againSnake.h"//自建头文件应该以.h结尾；
#define  SNAKE_LENGTH 20

#include <windows.h>
#include  <MMSystem.h>
#pragma comment (lib,"winmm.lib")

typedef int BOOL;//bool类型自定义；
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
int arraySnake[SNAKE_LENGTH][3]={0};//外层数组存储蛇所在的段数，内层数组存储X\Y\运动方向
int X,Y,FX,FY;
int flag ;
int a;
//主函数
int main()
{
	FirstPage();//对界面函数进行逻辑调用
	BackgroundMusic();
	StartInput();
	RandSnake();
	
	while(1)
	{
		system("cls");
		//strncpy(&BackgroundBlock[15][0],"★",2);
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

		Sleep(1500);//包含在<Windows.h>这个头文件中，必须声明这个头文件；
	}
	system("pause");//此行代码存在于头文件<stdlib.h>当中；
	return 0;
} 
//首界面
void FirstPage()
{
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t   》欢迎进入贪吃蛇世界《\n");
	printf("\t\t\t \t    》按空格键开始游戏《\n");
	printf("\t\t\t\t》通过w a s d控制蛇的运动《\n");//\t这里相当于tab键
}
//背景音乐调用
void BackgroundMusic()
{
	PlaySound("start.wav",NULL,SND_FILENAME|SND_ASYNC);//此处音乐不应该存绝对路径；可以通过这种方式来改变一些游戏的界面；
}
//检测空格输入并开始游戏
void StartInput()
{
	char StartGame;
	while(1)
	{
		StartGame=_getch();
		if(' '==StartGame)
		{
			PlaySound(NULL,0,0);//注意此处PlaySound的参数类型；
			break;
		}
	}
	system("cls");//清屏控制台；
	printf("游戏即将开始>>>>>\n");
}
//产生开始的随机蛇
void RandSnake()
{
	srand((unsigned int)time(NULL));//用系统的当前时间来确定随机种子；一个是有符号int，一个是无符号int，需要强制转换；
	X=rand()%19+1;
 	Y=rand()%18+1;
	//初始蛇的三段身体；
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
		strncpy(&BackgroundBlock[arraySnake[j][0]][arraySnake[j][1]],"■",2);//对字符串的处理第一个参数一定是地址或指针
	}
}

void ControlSnakeMove()//注意此处使用的逻辑，来达到蛇实时移动的效果；
{
	int k;
	ClearBeforeSnake();
	for(k=SNAKE_LENGTH;k>=1;k--)
	{
		if(0==arraySnake[k][0])//空蛇身检测跳过限制，以提高程序的执行效率；
		{
			continue;
		}
		arraySnake[k][0]=arraySnake[k-1][0];//主逻辑
		arraySnake[k][1]=arraySnake[k-1][1];
		arraySnake[k][2]=arraySnake[k-1][2];
	}

	arraySnake[0][2]=SnakeDirect;//键盘检测对蛇头实时控制；

	if(ToLeft==arraySnake[0][2]||ToRight==arraySnake[0][2])//控制蛇头坐标的移动 ；
	{
		arraySnake[0][1]+=arraySnake[0][2];
	}
	else if(ToUp==arraySnake[0][2]||ToDown==arraySnake[0][2]) 
	{
		arraySnake[0][0]+=arraySnake[0][2];
	}
	DrawSnake();
}

void ClearBeforeSnake()//清除之前的蛇身；
{
	int n;
	for(n=0;arraySnake[n][0]!=0;n++)
	{
		strncpy(&BackgroundBlock[arraySnake[n][0]][arraySnake[n][1]],"  ",2);//对字符串的处理第一个参数一定是地址或指针
	}
}

void GetKeyDirect()//键盘检测函数:异步与同步的选择及区别；
{
	flag_1=1;
	flag_2=1;
	flag_3=1;
	flag_4=1;
	if(GetAsyncKeyState('W'))
	{
		if(ToDown!=arraySnake[0][2])//bug方向限制；
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

BOOL SnakeDie()//蛇的死亡碰撞判断；
{
	if(ToLeft==arraySnake[0][2]||ToRight==arraySnake[0][2])
	{
		if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]],"■",2))
		{
			if(flag_1&&flag_2)
			{
				return FALSE;
			}
		}
	}
	else if(ToUp==arraySnake[0][2]||ToDown==arraySnake[0][2]) 
	{
		if(0==strncmp(&BackgroundBlock[arraySnake[0][0]+arraySnake[0][2]][arraySnake[0][1]],"■",2))
		{
			if(flag_3&&flag_4)
			{
				return FALSE;
			}
		}	
	}
	//if(ToLeft==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]-1],"■",2))
	//	{
	//		return FALSE;  
	//	}
	//}
	//if(ToRight==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]][arraySnake[0][1]+arraySnake[0][2]+1],"■",2))
	//	{
	//		return FALSE;
	//	}
	//}
	//if(ToUp==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]-1][arraySnake[0][1]+arraySnake[0][2]],"■",2))
	//	{
	//		return FALSE;
	//	}
	//}
	//if(ToDown==arraySnake[0][2])
	//{
	//	if(0==strncmp(&BackgroundBlock[arraySnake[0][0]+1][arraySnake[0][1]+arraySnake[0][2]],"■",2))
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
		//PlaySound("add.wav",NULL,SND_FILENAME|SND_ASYNC);//多音乐文件播放应该注意路径的问题；
		flag=1;
	}
}

void FoodProduce()//产生食物；
{
	BOOL PFLAG=TURE;

	if(TURE==ReFoodProduce)
		{
			return ;//是否需要提前结束食物产生的函数；
		}

	srand((unsigned int)time(NULL));
	while (1)
	{	
		FX=rand()%21+1;
		FY=rand()%18+1;
		for(a=0;arraySnake[a][0]!=0;a++)
		{
			if(FX*2==arraySnake[a][1])//防止食物与蛇身重合；&&FY==arraySnake[a][0]
			{
				PFLAG=FALSE;
				break;
			}
		}
		if(TURE==PFLAG)
			{
				strncpy(&BackgroundBlock[FY][FX*2],"★",2);//食物真正打印到屏幕上；
				ReFoodProduce=TURE;
				break;
			}
	}
}

//***蛇吃到食物时的生长逻辑；
void SnakeChange()
{
 	if((FX*2)==arraySnake[0][1])// & FY==arraySnake[0][0]
	{
		ReFoodProduce=FALSE;
		if(ToLeft==arraySnake[SnakeEnd][2])
		{
			arraySnake[SnakeEnd+1][0]=arraySnake[SnakeEnd][0];//即通过简单的赋值语句来实现蛇身变长；
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
		SnakeEnd++;//每次进入到这里的时候，证明蛇已经生长，故记录加一节；
	}
}


//BOOL ReSnakeDie()//蛇碰撞问题的修复
//{
//	int edge_1,edge_2,edge_3;
//	for(edge_1=0;edge_1<48;edge_1++)
//	{
//		if(BackgroundBlock[SNAKE_LENGTH][edge_1]==arraySnake[0][1]&&BackgroundBlock[SNAKE_LENGTH][edge_1]==arraySnake[0][0])
//	}
//}

