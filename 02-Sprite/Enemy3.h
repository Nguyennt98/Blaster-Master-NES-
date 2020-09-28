#pragma once

#include "Enemy.h"

#define ENEMY2_WIDTH 15

class CEnemy3 : public CEnemy
{
protected:
	float vy;
public:
	CEnemy3(float x, float y, float vy);
	void Update(DWORD dt);
	void Render();
};
