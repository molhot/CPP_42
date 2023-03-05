/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:06:31 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 13:06:31 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_HPP
#define FLAG_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	private:
		FlagTrap();

	public:
		FlagTrap(std::string name);
		~FlagTrap();

		void	highfive();
};

#endif