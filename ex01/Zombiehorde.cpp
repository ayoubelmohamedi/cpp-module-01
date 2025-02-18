/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:42:56 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/18 16:44:07 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 1)
    {
        std::cout << "HORD should have +1 zombie" << std::endl;
        return (NULL);
    } 
    Zombie* horde = new Zombie[N];
    if (horde == NULL)
	{
		std::cout << "Allocation failed." << std::endl;
		return (NULL);
	}
    for (int i = 0; i < N; i++)
        horde[i].set_name(name);
    return (horde);
}