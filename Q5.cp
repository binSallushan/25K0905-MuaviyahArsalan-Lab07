#include <iostream>
using namespace std;

class Character {
public:
    virtual void performAttack() = 0;
};

class Warrior : public Character {
public:
    void performAttack() override {
        cout << "Warrior performs Sword Slash!" << endl;
    }
};

class Mage : public Character {
public:
    void performAttack() override {
        cout << "Mage casts Fireball!" << endl;
    }
};

class Healer : public Character {
public:
    void performAttack() override {
        cout << "Healer performs Healing Strike!" << endl;
    }
};

int main() {
    Character* characters[3];

    characters[0] = new Warrior();
    characters[1] = new Mage();
    characters[2] = new Healer();

    for (int i = 0; i < 3; i++) {
        characters[i]->performAttack();
    }

    return 0;
}
