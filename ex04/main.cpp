/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:44:05 by ael-moha          #+#    #+#             */
/*   Updated: 2025/02/17 16:09:55ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


// to implement replace : check occurences, save pos, ,copy old line till pos, {past word} , repeat


int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "invalid format: <filename> <search> <replace>" << std::endl;
        return (1);
    }
    std::string old_word = av[2]; 
    std::string new_word = av[3]; 
    std::string dest_file = std::string(av[1]) + ".replace";
    std::ifstream original_file(av[1]);
    if (!original_file) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return (1);
    }
    std::ofstream tmp_file(dest_file.c_str());
    if (!tmp_file) {
        std::cerr << "Error creating temporary buffer!" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(original_file, line))
    {
        size_t pos = 0;
        size_t start = 0;
        std::string tmp_line;

        while ((pos = line.find(av[2], pos)) != std::string::npos)
        {
            tmp_line += line.substr(start, pos - start) + new_word;
            pos += old_word.length();
            start = pos;
        } 
        tmp_line += line.substr(start);
        tmp_file << tmp_line << "\n";
    }
    original_file.close();
    tmp_file.close();
    std::cout << "File modified successfully!" << std::endl;
    return (0);
}