/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:43:48 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 19:43:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "noting to do" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "initialized" << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this-> name << "is destructed" << std::endl;
}

Zombie::Zombie(const Zombie &cpzombie)
{
	std::cout << "copyconstruncter called" << std::endl;
	this->name = cpzombie.name;
}

Zombie& Zombie::operator=(const Zombie &zpy)
{
	std::cout << "operator constructer is called" << std::endl;
	this->name = zpy.name;
	std::cout << "this address is " << this << std::endl;
	std::cout << "opponent address is " << &zpy << std::endl;
	return (*this);
}

void	Zombie::makesound()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}