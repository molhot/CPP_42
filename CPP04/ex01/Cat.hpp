/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:01:33 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:01:33 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain		*_brain;

	public:
		Cat();
		~Cat();
		Cat(Cat &ref);
		Cat &operator=(Cat &rhs);
		void		makesound();
		std::string	getType();
		Brain		*getBrain();
};

#endif