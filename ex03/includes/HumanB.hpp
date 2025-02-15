



#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include <Weapon.hpp>


class HumanB
{
    private:
        std::string name;
        bool has_weapon;
        Weapon *w;
    
    public:
        //doesn't always have a weapon
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &w);

};



#endif