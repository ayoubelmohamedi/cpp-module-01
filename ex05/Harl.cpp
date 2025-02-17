/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:12:02 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 17:23:37 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"


void Harl::debug( void )
{
    std::cout << "DEBUG" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO" << std::endl;
    
}

void Harl::warning( void )
{
    std::cout << "WARNING" << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR" << std::endl;
}


void Harl::complain(std::string level) {
    
    if (level == "DEBUG")
        this->debug();
    else if (level == "WARNING")
        this->warning();
    else if (level == "INFO")
        this->info();
    else if (level == "ERROR")
        this->error();
    else
        std::cout << "Invalid level!" << std::endl;
}

