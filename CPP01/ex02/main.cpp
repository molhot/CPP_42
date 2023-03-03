/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:08:00 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/02 18:08:00 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;
	std::cout << str << std::endl;
	std::cout << stringPTR << "&&" << *stringPTR << std::endl;
	std::cout << &stringREF << "&&" << stringREF << std::endl;
}