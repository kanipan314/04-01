#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Enemy
{
public:
	//メンバ関数
	void approach();
	void attack();
	void withdrawal();
	void Update();

	//メンバ関数ポインタのテーブル
	static void(Enemy::* FuncTable[])();
private:
	

};

