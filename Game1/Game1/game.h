//头文件：函数的声明

#include<stdio.h>
#include<time.h>   //time的头文件
#include<stdlib.h> //srand的头文件

#define ROW 3   //#define定义符号
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//玩家赢返回‘*’
//电脑赢，返回‘#’
//平局--‘Q’
//继续--'C'
char IsWine(char board[ROW][COL], int row, int col);