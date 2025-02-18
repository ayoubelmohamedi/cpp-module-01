
#include <string>
#include <iostream>


int main()
{

    std::string var = "HI THIS IS BRAIN";
    
    std::string *ptr = &var;
    std::string &ref = var;

    std::cout << "addr => " << &var << std::endl;
    std::cout << "addr of ptr => " << ptr << std::endl;
    std::cout << "ref => " << &ref << std::endl;

    std::cout << "---------[VALUES]------------" << std::endl;

    std::cout << "original value => " << var << std::endl;
    std::cout << "ptr value => " << *ptr << std::endl;
    std::cout << "ref value => " << ref << std::endl;


    return (0);
}