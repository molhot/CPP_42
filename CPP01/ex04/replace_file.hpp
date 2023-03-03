/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:42:06 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/04 00:42:06 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>


class	ReplaceInfo
{
	private:
		std::string	replacewd;
		std::string replacedwd;
	
	public:
		ReplaceInfo(std::string s1, std::string s2);
		~ReplaceInfo();
};

#endif