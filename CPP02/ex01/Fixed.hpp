/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:34:03 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 02:34:03 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int			fix_point = 8;
		const int	float_point_num = 8;

	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &copy);
		~Fixed();

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif
