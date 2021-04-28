#ifndef WEAPON_H_
#define WEAPON_H_

#include <string>
#include <iostream>

class Weapon 
{
public:
    Weapon();
    Weapon(std::string weaponName, int weaponDamage);

    void change(std::string weaponName, int weaponDamage);
    void print() const;
    int getDamage() const;

private:
    std::string m_weaponName;
    int m_weaponDamage;
};

#endif