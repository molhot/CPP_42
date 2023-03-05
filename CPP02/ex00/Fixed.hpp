/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:03:56 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 00:03:56 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class OCF
{
	private:
		int					fix_p;
		static const int	f_bit = 8;
	
	public:
		OCF();
		OCF(const OCF &copy);
		OCF& operator=( const OCF &copy );
		~OCF();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif