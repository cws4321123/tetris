#pragma once

#include "point.h"

void RemoveCursor();
point GetCurrentCursorPos();
void SetCurrentCursorPos(int x, int y);
int ProcessKeyInput();
void InitKeyDelayRate(int rate);
void KeyDelaySpeedCtl(int addSpeed);

