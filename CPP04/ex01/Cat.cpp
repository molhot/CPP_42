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

Cat::Cat()
{
	this->type = "cat";
	this->_brain = new Brain;
	std::cout << "\033[33m Cat initializer called \033[m" << std::endl;
}

Cat::Cat(Cat &ref)
{
	this->type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "\033[33m Cat copyconstruct called \033[m" << std::endl;
}

Cat& Cat::operator=(Cat &rhs)
{
	this->type = rhs.type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(rhs.getBrain()));
	std::cout << "\033[33m Cat equaloperand called \033[m" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[33m Cat destructor called \033[m" << std::endl;
}

void Cat::makesound()
{
	std::cout << "\033[33m Cat is [MEOW!!] sounded \033[m" << std::endl;
}

std::string	Cat::getType()
{
	std::cout << "\033[33m Cat gettype called \033[m" << std::endl;
	return (this->type);
}

Brain *Cat::getBrain()
{
	std::cout << "\033[33m Cat getbrain called \033[m" << std::endl;
	return (this->_brain);
}