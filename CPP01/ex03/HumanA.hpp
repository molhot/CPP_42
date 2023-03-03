/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:01:08 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/03 14:01:08 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		weapon_a;
		std::string	name;
	
	public:
		HumanA(std::string name, Weapon weapon_a);
		~HumanA();
		void		attack();
};
