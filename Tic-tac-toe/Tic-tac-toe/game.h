#ifndef __GAME__H_

#define __GAME__H_
#define ROW 3
#include<stdio.h>
#include<stdlib.h>

//初始化棋盘为字符set
void InitBoard(char board[][ROW], int row, int col, char set);
//打印棋盘
void ShowBoard(char board[][ROW], int row, int col);
//玩家下棋
void PlayerMove(char board[][ROW], int row, int col);
//判断输赢
char IsWin(char board[][ROW], int row, int col);
//电脑下棋
void ComputerMove(char board[][ROW], int row, int col);

#endif