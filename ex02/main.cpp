
#include <string>
#include <iostream>


int main()
{

    std::string var = "HI THIS IS BRAIN";
    
    std::string *ptr = &var;
    std::string &ref = var;

    std::cout << &var << std::endl;
    std::cout << &ptr << std::endl;
    std::cout << &ref << std::endl;

    return (0);
}