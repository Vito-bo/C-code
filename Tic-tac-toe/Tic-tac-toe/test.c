/*
The Tic-tac-toe little game
Founded in 11-21-2019  by Vito bo
*/

#include"game.h"
//引入game.c文件，其中已经引入了程序所需要用到的头文件，所以不用再次重复引入，只要引入game.c即可

//打印游戏菜单
void Menu()
{
	printf("*******************************\n");
	printf("******欢迎来到三子棋小游戏*****\n");
	printf("*************0.exit************\n");
	printf("*************1.play************\n");
	printf("*******************************\n");
}
//游戏规则
void Game()
{
	char ret = 0;
	char board[ROW][ROW] = { 0 };//先将3*3的棋盘初始化为全0
	InitBoard(board, ROW, ROW, ' ');//将棋盘置为空格
	ShowBoard(board, ROW, ROW);//打印棋盘

	while (1)//只要有一方胜出，结束循环
	{
		PlayerMove(board, ROW, ROW);//玩家先下棋
		ret = IsWin(board, ROW, ROW);//判断输赢
		if (ret != ' ')//可能平局，可能一方胜出
		{
			break;
		}
		ShowBoard(board, ROW, ROW);//展示棋盘

		ComputerMove(board, ROW, ROW);//电脑出棋
		ret = IsWin(board, ROW, ROW);//判断输赢
		if (ret != ' ')//可能平局，可能一方胜出
		{
			break;
		}
		ShowBoard(board, ROW, ROW);
	}
	if (ret == 'x')//判断ret
	{
		printf("玩家胜出\n");
	}
	if (ret == ' O')
	{
		printf("电脑胜出\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;//用来存储用户输入的操作，从而确定玩家开始游戏还是退出
	do
	{
		Menu();//打印菜单
		printf("请输入您的选择：-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			Game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的操作\n");
			break;
		}
	} while (input);
	return 0;
}
