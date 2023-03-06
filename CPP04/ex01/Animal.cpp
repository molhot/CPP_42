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

Animal::Animal()
{
	this->_type = "animal";
	std::cout << "\033[31m Animal initializer called \033[m" << std::endl;
}

Animal::Animal(Animal const &ref)
{
	this->_type = ref._type;
	std::cout << "\033[31m Animal copyconstruct called \033[m" << std::endl;
}

Animal&	Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	std::cout << "\033[31m Animal equaloperand called \033[m" << std::endl;
	return (*this);
}

void	Animal::makesound()
{
	std::cout << "\033[31m Me...Med...Medog...MEOWDOG... \033[m" << std::endl;
}

Animal::~Animal()
{
	std::cout << "\033[31m Animal destructor called \033[m" << std::endl;
}