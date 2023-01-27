/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <satushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:53:39 by satushi           #+#    #+#             */
/*   Updated: 2023/01/27 20:10:17 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int arg_position;
    int argv_position;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    arg_position = 1;
    argv_position = 0;
    while (arg_position != argc)
    {
        while (argv[arg_position][argv_position] != '\0')
        {
            std::cout << (char)toupper(argv[arg_position][argv_position]);
            argv_position++;
        }
        arg_position++;
        argv_position = 0;
    }
    std::cout << std::endl;
}