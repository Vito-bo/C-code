/*
The Tic-tac-toe little game
Founded in 11-21-2019  by Vito bo
*/

#include"game.h"
//����game.c�ļ��������Ѿ������˳�������Ҫ�õ���ͷ�ļ������Բ����ٴ��ظ����룬ֻҪ����game.c����

//��ӡ��Ϸ�˵�
void Menu()
{
	printf("*******************************\n");
	printf("******��ӭ����������С��Ϸ*****\n");
	printf("*************0.exit************\n");
	printf("*************1.play************\n");
	printf("*******************************\n");
}
//��Ϸ����
void Game()
{
	char ret = 0;
	char board[ROW][ROW] = { 0 };//�Ƚ�3*3�����̳�ʼ��Ϊȫ0
	InitBoard(board, ROW, ROW, ' ');//��������Ϊ�ո�
	ShowBoard(board, ROW, ROW);//��ӡ����

	while (1)//ֻҪ��һ��ʤ��������ѭ��
	{
		PlayerMove(board, ROW, ROW);//���������
		ret = IsWin(board, ROW, ROW);//�ж���Ӯ
		if (ret != ' ')//����ƽ�֣�����һ��ʤ��
		{
			break;
		}
		ShowBoard(board, ROW, ROW);//չʾ����

		ComputerMove(board, ROW, ROW);//���Գ���
		ret = IsWin(board, ROW, ROW);//�ж���Ӯ
		if (ret != ' ')//����ƽ�֣�����һ��ʤ��
		{
			break;
		}
		ShowBoard(board, ROW, ROW);
	}
	if (ret == 'x')//�ж�ret
	{
		printf("���ʤ��\n");
	}
	if (ret == ' O')
	{
		printf("����ʤ��\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;//�����洢�û�����Ĳ������Ӷ�ȷ����ҿ�ʼ��Ϸ�����˳�
	do
	{
		Menu();//��ӡ�˵�
		printf("����������ѡ��-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			Game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("��������ȷ�Ĳ���\n");
			break;
		}
	} while (input);
	return 0;
}
