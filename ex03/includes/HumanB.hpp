



#ifndef HUMANB
#define HUMANB

#include <iostream>
#include <string>
#include <Weapon.hpp>


class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    
    public:
        //doesn't always have a weapon
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &w);

};



#endif