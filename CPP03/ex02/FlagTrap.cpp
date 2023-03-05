/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:06:34 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 13:06:34 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "\033[42m FlagTrap initializer called !\033[m" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "\033[42m FlagTrap destructor called !\033[m" << std::endl;
}

void	FlagTrap::highfive()
{
	std::cout << "\033[52m high five !\033[m" << std::endl;
}