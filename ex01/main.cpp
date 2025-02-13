/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:24:19 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/13 17:54:34 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		n = 10;

	horde = zombieHorde(n, "Horde Member");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < n; ++i)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(-1, "Failed");
	horde = zombieHorde(0, "Failed");
	return (0);
}