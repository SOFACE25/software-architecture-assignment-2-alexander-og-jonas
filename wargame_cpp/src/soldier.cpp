#include "soldier.hpp"
#include <iostream>

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

void Soldier::attack(Unit &target)
{
  target.take_hit(this->damage);
}
void Soldier::heal(Unit &target)
{
  std::cout << "Soldiers cant heal stupid!" << std::endl;
}
