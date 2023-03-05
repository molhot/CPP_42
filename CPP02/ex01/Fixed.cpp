/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:34:00 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 02:34:00 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "default constructer is called" << std::endl;
	this->fix_point = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "int arg default constructer is called" << std::endl;
	this->fix_point = n << float_point_num;
}

Fixed::Fixed(const float n)
{
	std::cout << "float arg default constructer is called" << std::endl;
	this->fix_point = std::roundf(n * (1 << float_point_num));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy constructer is called" << std::endl;
	//this->setRawBits(copy.getRawBits());
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "operator constructer is called" << std::endl;
	this->fix_point = copy.getRawBits();
	//*this = copy; なぜ処理が止まらない？
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getrawbit function is called" << std::endl;
	return (this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setrawbit called" << std::endl;
	this->fix_point = raw;
}

float	Fixed::toFloat( void ) const
{
	//return (this->getRawBits()) / (1 << this->float_point_num);
	return static_cast<float>(this->getRawBits()) / (1 << this->float_point_num);
}

int		Fixed::toInt( void ) const
{
	return (this->fix_point >> float_point_num);
}

std::ostream &operator<<(std::ostream &out, const Fixed &in)
{
	out << in.toFloat();
	return out;
}