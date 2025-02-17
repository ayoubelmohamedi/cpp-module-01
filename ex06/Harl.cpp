/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:06:35 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 21:22:05 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"


Harl::Harl () {}


Harl::~Harl () {}


void Harl::debug( void )
{
    std::cout << "[DEBUG] \n7XL-double-cheese" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO] \nadding extra bacon" << std::endl;
    
}

void Harl::warning( void )
{
    std::cout << "[WARNING] \nextra bacon for free" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR] \nThis is unacceptable! " << std::endl;
}


void Harl::complain(std::string level) 
{
    std::string values[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*ptrs[4])() = {&Harl::debug, &Harl::error, &Harl::warning, &Harl::info}; 

    size_t i = 0; 
    while (i < 4)
    {
        if (values[i] == level)
            return ;
        i++;
    }
    switch (i)
    {
    case 0:
        (this->*ptrs[0])();
    case 1:
        (this->*ptrs[1])();
    case 2:
        (this->*ptrs[2])();
    case 3:
        (this->*ptrs[3])();
        break;
    default:
        std::cout << "Probably complaining about insignificant problem" << std::endl;
    }
    
}
