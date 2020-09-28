#pragma once

#include "Enemy.h"

#define ENEMY2_WIDTH 15

class CEnemy2 : public CEnemy
{
protected:
	float vx;
public:
	CEnemy2(float x, float y, float vx);
	void Update(DWORD dt);
	void Render();
};
