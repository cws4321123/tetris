#pragma once
void InitNewBlockPos(int x, int y);
void ChooseBlock();
int GetCurrentBlockIdx(void);
void ShowBlock(char blockInfo[][4]);
void DeleteBlock(char blockInfo[][4]);
int BlockDown();

void ShiftLeft();
void ShiftRight();
void RotateBlock();
//int DetectCollision(int posX, int posY, char blockModel[][4]);
void DrawGameBoard();
void AddCurrentBlockInfoToBoard();
int IsGameOver();
void SolidCurrentBlock();
void RemoveFillUpLine();