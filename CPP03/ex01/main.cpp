/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:43:14 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 11:43:14 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap	C1 = ClapTrap("test1");
	// ClapTrap	C2 = ClapTrap("test2");
	ScavTrap	C3 = ScavTrap("test1");
	ScavTrap	C4 = ScavTrap("test2");
	size_t		try_count;
	std::string	target;

	// try_count = 0;
	// target = "enemy1";
	// while (try_count != 11)
	// {
	// 	C1.attack(target);
	// 	C1.takeDamage(1);
	// 	C1.beRepaired(1);
	// 	try_count++;
	// }
	// try_count = 0;
	// std::cout << "" << std::endl;
	// std::cout << " \033[43m now no hp check \033[m" << std::endl;
	// while (try_count != 11)
	// {
	// 	C2.takeDamage(1);
	// 	try_count++;
	// }
	// C2.takeDamage(1);
	// C2.beRepaired(1);

	try_count = 0;
	target = "enemy2";
	while (try_count != 11)
	{
		C3.attack(target);
		C3.takeDamage(1);
		C3.beRepaired(1);
		try_count++;
	}
	try_count = 0;
	std::cout << "" << std::endl;
	std::cout << " \033[43m now no hp check \033[m" << std::endl;
	while (try_count != 11)
	{
		C4.takeDamage(1);
		try_count++;
	}
	C4.takeDamage(1);
	C4.beRepaired(1);
}