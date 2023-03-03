/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:01:05 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/03 14:01:05 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapona):name(name), weapon_a(weapona)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->weapon_a.getType() << "is used by" << this->name \
	<< std::endl;
}