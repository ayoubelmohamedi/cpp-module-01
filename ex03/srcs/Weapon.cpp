
#include <Weapon.hpp>


Weapon::Weapon(const std::string type) : type(type) {};


Weapon::~Weapon() {};

const std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(const std::string type)
{
    this->type = type;
}
