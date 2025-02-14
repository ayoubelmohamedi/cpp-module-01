/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:30:37 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/14 16:27:13 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Buckethead Zombie");
	randomChump("Basic Zombie");
	delete zombie;
	return (0);
}