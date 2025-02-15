/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:44:05 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/15 22:58:55 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "invalid format: <filename> <search> <replace>" << std::endl;
        return (1);
    }
    std::string old_word = av[1]; 
    std::string new_word = av[2]; 
    std::ifstream original_file(av[1]);
    if (!original_file) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return (1);
    }
    std::ofstream tmp_file(".temp_buff.txt");
    if (!tmp_file) {
        std::cerr << "Error creating temporary buffer!" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(original_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(av[2], pos)) != std::string::npos)
        {
            line.replace(pos, old_word.length(), new_word);
            pos += new_word.length();
        }
        tmp_file << line << "\n";
    }
    original_file.close();
    tmp_file.close();
    
    std::remove(av[1]); 
    std::rename(".temp_buff.txt", av[1]);
    std::cout << "File modified successfully!" << std::endl;

    return (0);
}