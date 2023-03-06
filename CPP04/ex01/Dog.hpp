/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:38 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:38 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain		*_brain;

	public:
		Dog();
		~Dog();
		Dog(Dog &ref);
		Dog & operator=(Dog &rhs);
		void		makesound();
		std::string	getType();
		Brain		*getBrain();
};

#endif