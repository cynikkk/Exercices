#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>
#include "Weapon.h"

class Character
{
public:
    Character();
    Character(std::string name);
    Character(std::string weaponName, int weaponDamage);
    Character(int health, int mana);

    void receiveDamage(int amount);
    void attack(Character &target);
    void drinkHealPotion(int amount);
    void changeWeapon(std::string newWeaponName, int newWeaponDamage);
    void drawState() const;
    bool isAlive() const;

private:
    std::string m_name;
    int m_health;
    int m_mana;
    Weapon m_weapon;
};

#endif