/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:36:32 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/06 16:36:32 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	size_t	position;

	position = 0;
	this->_ideas = new std::string[100];
	while (position != 100)
	{
		this->_ideas[position] = "brain";
		position++;
	}
	std::cout << "this is brain!!" << std::endl;
}

Brain::~Brain()
{
	delete [] (this->_ideas);
	std::cout << "brain end ...zZZ" << std::endl;
}

Brain::Brain(Brain &ref)
{
	size_t	position;

	position = 0;
	std::string	*ref_ideas = ref.obtainIdeas();
	this->_ideas = new std::string[100];
	while (position != 100)
	{
		this->_ideas[position] = ref_ideas[position] + "stolen";
		position++;
	}
	std::cout << "Brain copy constructed , ppp... " << std::endl;
}

Brain& Brain::operator=(Brain const & rhs)
{
	size_t	position;

	position = 0;
	while (position != 100)
	{
		this->_ideas[position] = rhs._ideas[position];
		position++;
	}
	std::cout << "Brain equaloperater is called , ppp... " << std::endl;
	return (*this);
}

std::string	*Brain::obtainIdeas()
{
	std::cout << "Brain idea called" << std::endl;
	return (this->_ideas);
}


