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

Dog::Dog()
{
	this->type = "dog";
	this->_brain = new Brain;
	std::cout << "\033[32m Dog initializer called \033[m" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "\033[32m Dog destructor called \033[m" << std::endl;
}

Dog::Dog(Dog &ref)
{
	std::cout << "\033[36m ??????????? \033[m" << std::endl;
	this->type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "\033[32m Dog copyconstruct called \033[m" << std::endl;
	std::cout << "\033[36m ??????????? \033[m" << std::endl;
}

Dog & Dog::operator=(Dog &rhs)
{
	std::cout << "\033[37m ??????????? \037[m" << std::endl;
	this->type = rhs.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(rhs.getBrain()));
	std::cout << "\033[32m Dog equaloperand called \033[m" << std::endl;
	std::cout << "\033[37m ??????????? \037[m" << std::endl;
	return (*this);
}

void Dog::makesound()
{
	std::cout << "\033[32m Dog is [ONE!!] sounded \033[m" << std::endl;
}

std::string	Dog::getType()
{
	std::cout << "\033[32m Dog gettype called \033[m" << std::endl;
	return (this->type);
}

Brain *Dog::getBrain()
{
	std::cout << "\033[32m Dog getbrain called \033[m" << std::endl;
	return (this->_brain);
}