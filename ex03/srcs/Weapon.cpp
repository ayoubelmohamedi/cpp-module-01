
#include <Weapon.hpp>


Weapon::Weapon(const std::string type) : type(type) {};


const std::string &Weapon::getType()
{
    return (this->type);
}

const std::string &Weapon::setType(const std::string type) : type(type) {};
