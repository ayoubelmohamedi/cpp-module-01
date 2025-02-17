/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:12:02 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 18:57:52 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"


Harl::Harl () {}


Harl::~Harl () {}


void Harl::debug( void )
{
    std::cout << "DEBUG: 7XL-double-cheese" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: adding extra bacon" << std::endl;
    
}

void Harl::warning( void )
{
    std::cout << "WARNING: extra bacon for free" << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: This is unacceptable! " << std::endl;
}


void Harl::complain(std::string level) 
{
    std::string values[4] = {"DEBUG","WARNING","INFO","ERROR"};
    void (Harl::*ptrs[4])() = {&Harl::debug, &Harl::error, &Harl::warning, &Harl::info}; 
    
    for (size_t i = 0; i < 4; i++)
    {
        if (values[i] == level)
        {
            (this->*ptrs[i])();
            return ;
        }
    }
    std::cout << "Invalid level!" << std::endl;
    
}

