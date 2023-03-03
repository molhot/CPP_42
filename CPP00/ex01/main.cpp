/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:03:37 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 20:03:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>
#include <iostream>
#include <stdbool.h>

void    output(std::string name)
{
    std::cout << name << std::endl;
}

bool    strcmp_cpp(std::string s1, std::string s2)
{
    size_t  position;

    position = 0;
    while (s1[position] != '\0')
    {
        if (s1[position] != s2[position])
            return (false);
        position++;
    }
    if (s2[position] != '\0')
        return (false);
    return (true);
}

int main(void)
{
    Phonebook   book;
    static  int i;
    std::string name;
    std::string operate;
	
	i = 0;
	book.Manual();
	while (true)
	{
		std::cout << "put your operate" << std::endl;
        std::cin >> operate;
        if (strcmp_cpp(operate, "ADD"))
            book.addcontact(0);
        else if (strcmp_cpp(operate, "SEARCH"))
            book.showcontact(0);
        else if (strcmp_cpp(operate, "EXIT"))
            break ;
        else
        {
            std::cout << std::endl;
            book.Manual();
        }
    }
    return (0);
}