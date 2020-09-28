#include "Game.h"
#include "Enemy2.h"

CEnemy2::CEnemy2(float x, float y, float vx) :CEnemy(x, y)
{
	this->vx = vx;
};

void CEnemy2::Update(DWORD dt)
{
	x += vx * dt;

	int BackBufferWidth = CGame::GetInstance()->GetBackBufferWidth();
	if (x <= 0 || x >= BackBufferWidth - ENEMY2_WIDTH) {

		vx = -vx;

		if (x <= 0)
		{
			x = 0;
		}
		else if (x >= BackBufferWidth - ENEMY2_WIDTH)
		{
			x = (float)(BackBufferWidth - ENEMY2_WIDTH);
		}
	}
}

void CEnemy2::Render()
{
	LPANIMATION ani;

	//[RED FLAG][TODO]: Student needs to think about how to associate this animation/asset to Mario!!
	if (vx > 0) ani = CAnimations::GetInstance()->Get(502);
	else ani = CAnimations::GetInstance()->Get(503);

	ani->Render(x, y);
}