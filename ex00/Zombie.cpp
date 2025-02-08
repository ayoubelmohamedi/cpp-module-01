/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:30:44 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/08 13:30:45 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name  = name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " -> destroyed"  << std::endl; 
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}