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
    // creates a zombie, name it, and return it
    Zombie* newZombie( std::string name );
    // creates a zombie, name it, and the zombie announces itself.
    void randomChump( std::string name );
}

#endif