/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:23:58 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 17:33:13 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main ()
{

    Harl harl;
    harl.complain("warning");
    harl.complain("info");
    harl.complain("debug");
    harl.complain("error");
    return (0);
}