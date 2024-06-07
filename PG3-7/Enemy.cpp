#include "Enemy.h"


using namespace std;


void(Enemy::* Enemy::FuncTable[])() = {
    &Enemy::approach,
    &Enemy::attack,
    &Enemy::withdrawal
};

void Enemy::approach() {
    // 接近フェーズ
    cout << "接近しました" << endl;
}

void Enemy::attack() {
    // 攻撃フェーズ
    cout << "攻撃しました" << endl;
}

void Enemy::withdrawal() {
    // 離脱フェーズ
    cout << "離脱しました" << endl;
}

void Enemy::Update() {
    for (int i = 0; i < 3; i++) {
        // メンバ関数呼び出し
        (this->*FuncTable[i])();
    }
}