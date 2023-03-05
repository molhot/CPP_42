/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:28:46 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 12:28:46 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name) //, _hp(100) this is not working
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "\033[45m ScavTrap initializer called !\033[m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[44m ScavTrap destructor called !\033[m" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[36m ScavTrap is on gatekeepermode !\033[m" << std::endl;
}