#pragma once

#include "Enemy.h"

#define ENEMY1_WIDTH 15

class CEnemy1 : public CEnemy
{
protected:
	float vx;
public:
	CEnemy1(float x, float y, float vx);
	void Update(DWORD dt);
	void Render();
};
