#include "Weapon.h"

Weapon::Weapon() : m_weaponName("Sword"), m_weaponDamage(10) {}
Weapon::Weapon(std::string weaponName, int weaponDamage) : m_weaponName(weaponName), m_weaponDamage(weaponDamage) {}

void Weapon::change(std::string weaponName, int weaponDamage)
{
    m_weaponName = weaponName;
    m_weaponDamage = weaponDamage;
}

void Weapon::print() const
{
    std::cout << "Weapon : " << m_weaponName << " (Damage : " << m_weaponDamage << ")" << std::endl;
}

int Weapon::getDamage() const
{
    return m_weaponDamage;
}