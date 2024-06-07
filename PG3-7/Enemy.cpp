#include "Enemy.h"


using namespace std;


void(Enemy::* Enemy::FuncTable[])() = {
    &Enemy::approach,
    &Enemy::attack,
    &Enemy::withdrawal
};

void Enemy::approach() {
    // �ڋ߃t�F�[�Y
    cout << "�ڋ߂��܂���" << endl;
}

void Enemy::attack() {
    // �U���t�F�[�Y
    cout << "�U�����܂���" << endl;
}

void Enemy::withdrawal() {
    // ���E�t�F�[�Y
    cout << "���E���܂���" << endl;
}

void Enemy::Update() {
    for (int i = 0; i < 3; i++) {
        // �����o�֐��Ăяo��
        (this->*FuncTable[i])();
    }
}