/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:31 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:31 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string cat):Animal(cat)
{
	std::cout << "\033[33m Cat initializer called \033[m" << std::endl;
}

Cat::~Cat()
{
	std::cout << "\033[33m Cat destructor called \033[m" << std::endl;
}

void Cat::makesound()
{
	std::cout << "\033[33m Cat is [MEOW!!] sounded \033[m" << std::endl;
}