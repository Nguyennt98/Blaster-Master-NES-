#include "Game.h"
#include "Enemy3.h"

CEnemy3::CEnemy3(float x, float y, float vy) :CEnemy(x, y)
{
	this->vy = vy;
};

void CEnemy3::Update(DWORD dt)
{
	y += vy * dt;

	int BackBufferHeight = CGame::GetInstance()->GetBackBufferHeight();
	if (y <= 0 || y >= BackBufferHeight - ENEMY2_WIDTH) {

		vy = -vy;

		if (y <= 0)
		{
			y = 0;
		}
		else if (y >= BackBufferHeight - ENEMY2_WIDTH)
		{
			y = (float)(BackBufferHeight - ENEMY2_WIDTH);
		}
	}
}

void CEnemy3::Render()
{
	LPANIMATION ani;

	//[RED FLAG][TODO]: Student needs to think about how to associate this animation/asset to Mario!!
	if (vy > 0) ani = CAnimations::GetInstance()->Get(504);
	else ani = CAnimations::GetInstance()->Get(505);

	ani->Render(x, y);
}