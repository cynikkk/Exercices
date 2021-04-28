#include "Character.h"

Character::Character() : m_name("John"), m_health(100), m_mana(100), m_weapon("Sword", 10) {}
Character::Character(std::string name) : m_name(name), m_health(100), m_mana(100), m_weapon("Sword", 10) {}
Character::Character(std::string weaponName, int weaponDamage) :m_health(100), m_mana(100), m_weapon(weaponName, weaponDamage) {}
Character::Character(int health, int mana) : m_health(health), m_mana(mana), m_weapon("Sword", 10){}

void Character::receiveDamage(int amount)
{
    m_health -= amount;

    if (m_health < 0) m_health = 0;
}

void Character::attack(Character &target)
{
    target.receiveDamage(m_weapon.getDamage());
}

void Character::drinkHealPotion(int amount)
{
    m_health += amount;
    
    if (m_health > 100) m_health = 100;
}

void Character::changeWeapon(std::string newWeaponName, int newWeaponDamage)
{
    m_weapon.change(newWeaponName, newWeaponDamage);
}

void Character::drawState() const
{
    if (!isAlive())
    {
        std::cout << m_name << " is dead" << std::endl;
        return;
    }
    std::cout << "Name : " << m_name << std::endl;
    std::cout << "Health : " << m_health << std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_weapon.print();
}

bool Character::isAlive() const
{
    return m_health > 0;
}
