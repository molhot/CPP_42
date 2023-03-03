/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:01:13 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/03 14:01:13 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weapon_b;
		std::string	name;
	
	public:
		HumanB(std::string nameb);
		~HumanB();
		void		attack();
		void		set_weapon(Weapon &weaponb);
};