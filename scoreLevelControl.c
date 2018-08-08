#include "common.h"
#include "keyCurControl.h"

#define LEVEL_DIFF 2
#define LEVER_UP_SCORE_DIFF	20

static int curGameLevel = 1;
static int curGameScore = 0;

void ShowCurrentScoreAndLevel() {
	SetCurrentCursorPos(30, 4);
	printf("*현재 레벨 : %d      *", curGameLevel);

	SetCurrentCursorPos(30, 7);
	printf("*현재 점수 : %d      *", curGameScore);
}

void GameLevelUp() {
	curGameLevel++;
	KeyDelaySpeedCtl(LEVEL_DIFF);
}

void AddGameScore(int score) {
	if (score < 1)
		return;

	curGameScore += score;
	if (curGameScore >= curGameLevel * LEVER_UP_SCORE_DIFF)
		GameLevelUp();
}