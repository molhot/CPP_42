/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:54:28 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 19:54:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	testzombi(Zombie test)
{
	test.makesound();
}

int main()
{
	std::string	zombie1;
	std::string	zombie2;

	std::cout << "input first zombiename" << std::endl;
	std::cin >> zombie1;
	// Zombie::randomChump(zombie1);
	// std::cout << "-----------------------" << std::endl;

	std::cout << "test copyconstructor" << std::endl;
	Zombie zom1(zombie1);
	Zombie zom2 = zom1;
	std::cout << "zom1 address is " << &zom1 << std::endl;
	std::cout << "zom2 address is " << &zom2 << std::endl;
	std::cout << "-----------------------" << std::endl;

	std::cout << "test operand overload" << std::endl;
	Zombie zom3;
	zom3 = zom2;

	std::cout << "out scope check" << std::endl;
	testzombi(zom1);

	std::cout << "-----------------------" << std::endl;
	
	Zombie *zom4 = newZombie("test");
	zom4->makesound();
	randomChump("test2");

	// std::cout << "input second zombiename" << std::endl;
	// std::cin >> zombie2;
	// Zombie::newZombie(zombie2);
}