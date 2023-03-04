/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:48:34 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/04 20:48:34 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string	level;
	Harl		harl;

	level = "";
	while (level != "exit")
	{
		std::cout << "input level" << std::endl;
		std::cin >> level;
		harl.complain(level);
	}
}