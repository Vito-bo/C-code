#include"game.h"

//��ʼ������ 
// row��  col��
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
//��ӡ����
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
//�������
void PlayerMove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����ƶ�\n");
		printf("������1-3�����꣺\n");
		scanf("%d%d", &x, &y);
		//�����̷�Χ�ڽ����ж��Ƿ�ռ�ã�����ռ�����������룬��û��ռ������Ϊ'x'
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("λ���Ѿ���ռ�ã�����������\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}
}
//�ж������Ƿ�������static���Σ�ֻ���ڸ�.c�ļ���ʹ��
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
				return 0;//����û����
			}
		}
	}
	return 1;//��������
}
//�ж���Ӯ
char IsWin(char board[][ROW], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//����ͬ
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
		//����ͬ
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
		//���Խ�����ͬ
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ')
		{
			return board[0][0];
		}
		//���Խ�����ͬ
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[0][2] != ' ')
		{
			return board[0][2];
		}

		if (IsFull(board, ROW, ROW))
		{
			return 'Q';//ƽ��
		}
	}
	return ' ';//˭Ҳû��Ӯ
}
//��������
void ComputerMove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ƶ�\n");
	while (1)
	{
		x = rand() % ROW;//[0-3)���ֵ
		y = rand() % ROW;//[0-3)���ֵ
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';//�жϸ������Ƿ�ռ�ã�û������0
			break;
		}
	}
}
