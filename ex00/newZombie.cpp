/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:30:39 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/14 16:19:07 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* Zombie::newZombie( std::string name )
{
    Zombie * zombie= new Zombie(name);
    return (zombie);
}
