/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:03:53 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 00:03:53 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

OCF::OCF()
{
	std::cout << "default constructer is called" << std::endl;
	this->fix_p = 0;
}

OCF::OCF(const OCF &copy)
{
	std::cout << "copy constructer is called" << std::endl;
	this->setRawBits(copy.getRawBits());
}

OCF& OCF::operator=(const OCF &copy)
{
	std::cout << "operator constructer is called" << std::endl;
	this->fix_p = copy.getRawBits();
	return (*this);
}

OCF::~OCF()
{
	std::cout << "destructor called" << std::endl;
	this->fix_p = 0;
}

int		OCF::getRawBits( void ) const
{
	std::cout << "getraobit function is called" << std::endl;
	return (this->fix_p);
}

void	OCF::setRawBits(int const raw)
{
	std::cout << "setrawbit called" << std::endl;
	this->fix_p = raw;
}
