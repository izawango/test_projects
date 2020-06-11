#pragma once

#include "Character.h"

class Dragon : public Character
{
public:
	//初期化
	virtual void Init();
	//更新処理
	virtual void Update();
	//2D描画
	virtual void Draw2D();
	//解放
	virtual void Release();
};