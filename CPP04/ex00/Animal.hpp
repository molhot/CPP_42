/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:43 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:43 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal(std::string type);
		//~Animal();
		virtual ~Animal();
};

#endif