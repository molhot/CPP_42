/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:40 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:40 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type):_type(type)
{
	std::cout << "\033[31m Animal initializer called \033[m" << std::endl;
}

Animal::~Animal()
{
	std::cout << "\033[31m Animal destructor called \033[m" << std::endl;
}