


#ifndef HUMANA
#define HUMANA

#include <iostream>
#include <string>
#include <Weapon.hpp>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    
    public:
        //always has weapon
        HumanA(std::string name, Weapon &wp);
        ~HumanA();
        void attack(void);
};



#endif