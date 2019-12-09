//游戏边框背景；
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int BOOL;//bool类型自定义；
#define TURE 1
#define FALSE 0

#include <windows.h>
#define SNAKE_LENGTH 20
char BackgroundBlock[SNAKE_LENGTH][48]={"■■■■■■■■■■■■■■■■■■■■■■■\n",            
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■                                          ■\n",
										"■■■■■■■■■■■■■■■■■■■■■■■\n"
			 
										};
void BackgroundGame2()
{
	int i;
	for(i=0;i<20;i++)
	{
		printf(BackgroundBlock[i]);//注意printf的这种输出方式；
	}
}

//尤其注意，小方块纵向就是占一行即一个字节，不存在两个字节问题，所以程序中所有的Y都置一考虑；
enum SportTo{ToUp=-1,ToDown=1,ToLeft=-2,ToRight=2};//定义一个枚举类型，来包括蛇所有的移动方向；

int SnakeDirect=ToLeft;

BOOL ReFoodProduce=FALSE;//判断是否需要重新产生食物标记；

//记住蛇的总长度；
int SnakeEnd=2;

int flag_1=1,flag_2=1,flag_3=1,flag_4=1;


