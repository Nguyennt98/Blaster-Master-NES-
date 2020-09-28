#include "Game.h"
#include "Enemy1.h"

CEnemy1::CEnemy1(float x, float y, float vx):CEnemy(x, y)
{
	this->vx = vx;
};

void CEnemy1::Update(DWORD dt)
{
	x += vx*dt;

	int BackBufferWidth = CGame::GetInstance()->GetBackBufferWidth();
	if (x <= 0 || x >= BackBufferWidth - ENEMY1_WIDTH) {

		vx = -vx;

		if (x <= 0)
		{
			x = 0;
		}
		else if (x >= BackBufferWidth - ENEMY1_WIDTH)
		{
			x = (float)(BackBufferWidth - ENEMY1_WIDTH);
		}
	}
}

void CEnemy1::Render()
{
	LPANIMATION ani;

	//[RED FLAG][TODO]: Student needs to think about how to associate this animation/asset to Mario!!
	if (vx>0) ani = CAnimations::GetInstance()->Get(500);
	else ani = CAnimations::GetInstance()->Get(501);

	ani->Render(x, y);
}