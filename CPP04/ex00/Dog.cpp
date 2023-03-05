/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:35 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:35 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string dog):Animal(dog)
{
	std::cout << "\033[32m Dog initializer called \033[m" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\033[32m Dog destructor called \033[m" << std::endl;
}

void Dog::makesound()
{
	std::cout << "\033[32m Dog is [ONE!!] sounded \033[m" << std::endl;
}