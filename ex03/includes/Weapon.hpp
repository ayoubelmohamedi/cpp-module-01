

#ifndef WEAPON
#define WEAPON 

#include <iostream>
#include <string>


class Weapon
{
    private:
        std::string type;
    
    public:
        Weapon(const std::string type);
        ~Weapon();
        const std::string &getType();
        const std::string &setType(const std::string type);

};



#endif