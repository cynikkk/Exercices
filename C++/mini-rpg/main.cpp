#include "Character.h"
#include <iostream>

int main()
{
    Character david("David"), goliath("Goliath");
    goliath.attack(david);
    david.drinkHealPotion(20);
    goliath.attack(david);
    david.attack(goliath);

    goliath.changeWeapon("Axe", 40);
    goliath.attack(david);

    david.drawState();
    std::cout << std::endl;
    goliath.drawState();

    return 0;
}