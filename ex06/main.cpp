/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:02:14 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 21:24:19 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <Harl.hpp>


int main (int ac, char **av)
{

    Harl harl;

    if (ac == 2)
    {
        harl.complain(av[1]); 
    }
    else 
    {
        std::cout << "Valid inputs are => [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }

    return (0);
}