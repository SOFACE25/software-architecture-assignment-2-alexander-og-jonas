#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{

}

void CombatMedic::heal(Unit &target)
{
   if (target.get_health() <= 0)
    {
        std::cout << "He is gone..."<< std::endl;
        return;
    }
    else
    {
        std::cout << "Hang in there!" << std::endl;
        target.set_health(target.get_healt()+10);
    }
}
