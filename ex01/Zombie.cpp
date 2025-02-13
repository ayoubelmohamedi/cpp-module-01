/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:24:38 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/13 17:48:49 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie::Zombie()
{
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

void Zombie::set_name(std::string name)
{
    this->name = name; 
}