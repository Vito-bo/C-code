#ifndef __GAME__H_

#define __GAME__H_
#define ROW 3
#include<stdio.h>
#include<stdlib.h>

//��ʼ������Ϊ�ַ�set
void InitBoard(char board[][ROW], int row, int col, char set);
//��ӡ����
void ShowBoard(char board[][ROW], int row, int col);
//�������
void PlayerMove(char board[][ROW], int row, int col);
//�ж���Ӯ
char IsWin(char board[][ROW], int row, int col);
//��������
void ComputerMove(char board[][ROW], int row, int col);

#endif