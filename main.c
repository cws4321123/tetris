#include <Windows.h>
#include "keyCurControl.h"
#include "blockStageControl.h"
#include "common.h"
#include "scoreLevelControl.h"

#define START_CURPOS_X	(5 *2)
#define START_CURPOS_Y	(0)


int main() {
	
	InitKeyDelayRate(5);

	RemoveCursor();

	DrawGameBoard();

	ShowCurrentScoreAndLevel();
	

	while (1) {
		InitNewBlockPos(START_CURPOS_X, START_CURPOS_Y);

		ChooseBlock();
		
		if (IsGameOver())
			break;

		while (1) {
			if (BlockDown() == 0) {
				AddCurrentBlockInfoToBoard();
				break;
			}
			if (ProcessKeyInput()) {
				break;
			}
		}
		
	}

	SetCurrentCursorPos(10, 10);

	puts("Game Over");

	return 0;
}
