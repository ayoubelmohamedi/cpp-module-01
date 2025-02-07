#ifndef ZOMBIE
#define ZOMBIE_HPP


#include <string>
#include <iostream>


class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void announce( void );
}

#endif