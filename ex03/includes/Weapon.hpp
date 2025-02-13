

#ifndef WEAPON
#define WEAPON 

#include <string>


class Weapon
{
    private:
        std::string type;
    
    public:
        const std::string &getType();
        const std::string &setType();

}



#endif