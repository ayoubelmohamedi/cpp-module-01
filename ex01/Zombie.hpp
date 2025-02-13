/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:30:46 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/13 17:42:07 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE_HPP


#include <string>
#include <iostream>


class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void announce( void );
    void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif