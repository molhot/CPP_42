/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:01:11 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/03 14:01:11 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameb):name(nameb)
{
	this->weapon_b = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::set_weapon(Weapon &weaponb)
{
	this->weapon_b = &weaponb;
}

void	HumanB::attack()
{
	if (this->weapon_b != NULL)
	std::cout << this->weapon_b->getType() << "is used by" << this->name \
	<< std::endl;
	else
		std::cout << "no weapon" << std::endl;
}