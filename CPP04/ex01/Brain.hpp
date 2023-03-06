/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:43:08 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/06 14:43:08 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*_ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain &ref);
		Brain&		operator=(Brain const &rhs);
		std::string	*obtainIdeas();
};

#endif