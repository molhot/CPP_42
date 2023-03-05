/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:43:07 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 11:43:07 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_hp(10), _ep(10), _ad(10), _name(name)
{
	std::cout << "Clap Trap \033[31m hp \033[m, \033[32m ep \033[m, \033[33m ad \033[m , \033[34m name \033[m initialized" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep != 0 && this->_hp != 0)
	{
		std::cout << this->_name << " attacks " << target << " , causing " << this->_ad << " damage " << std::endl;
		this->_ep = this->_ep - 1;
	}
	std::cout << " now claptrap \033[32m energy is " << this->_ep << "\033[m" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
		std::cout << "\033[39m" << this->_name << " is death, RIP " << "\033[m" << std::endl;
	else
	{
		if (this->_hp - amount <= 0)
		{
			this->_hp = 0;
			this->_ep = 0;
			std::cout << this->_name << " is caused " << amount << " damage " << std::endl;
			std::cout << this->_name << " is now death, RIP " << std::endl;
		}
		else
		{
			this->_hp = this->_hp - amount;
			std::cout << this->_name << " is caused " << amount << " damage " << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep != 0)
	{
		std::cout << this->_name << " repaired " <<  amount  << std::endl;
		this->_hp = this->_hp + 1;
		this->_ep = this->_ep - 1;
		std::cout << " now claptrap " << "\033[31m hp is " << this->_hp << "\033[m and" << "\033[32m energy is " << this->_ep << "\033[m" << std::endl;
	}
}