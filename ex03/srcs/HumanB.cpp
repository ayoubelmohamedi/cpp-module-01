



#include <HumanB.hpp>



HumanB::HumanB(std::string name) {
    this->name = name;
    this->has_weapon = false;
};

HumanB::~HumanB() {};

void HumanB::setWeapon(Weapon &w)
{
    if (!this->has_weapon)
        this->has_weapon = true;
    this->w = &w;
}

void HumanB::attack(void)
{
    if (has_weapon)
        std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}