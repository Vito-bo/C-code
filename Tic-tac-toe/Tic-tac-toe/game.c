#include"game.h"

//初始化棋盘 
// row行  col列
void InitBoard(char board[][ROW], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void ShowBoard(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家移动\n");
		printf("请输入1-3的坐标：\n");
		scanf("%d%d", &x, &y);
		//在棋盘范围内进行判断是否被占用，若被占用则重新输入，若没被占用则置为'x'
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("位置已经被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}
//判断棋盘是否下满，static修饰，只能在该.c文件中使用
static int IsFull(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没有满
			}
		}
	}
	return 1;//棋盘已满
}
//判断输赢
char IsWin(char board[][ROW], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//行相同
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
		//列相同
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
		//主对角线相同
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ')
		{
			return board[0][0];
		}
		//副对角线相同
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[0][2] != ' ')
		{
			return board[0][2];
		}

		if (IsFull(board, ROW, ROW))
		{
			return 'Q';//平局
		}
	}
	return ' ';//谁也没有赢
}
//电脑下棋
void ComputerMove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑移动\n");
	while (1)
	{
		x = rand() % ROW;//[0-3)随机值
		y = rand() % ROW;//[0-3)随机值
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';//判断该座标是否被占用，没有则置0
			break;
		}
	}
}
