#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Enemy
{
public:
	//�����o�֐�
	void approach();
	void attack();
	void withdrawal();
	void Update();

	//�����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* FuncTable[])();
private:
	

};

