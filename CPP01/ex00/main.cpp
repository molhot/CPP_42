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

int main()
{
	std::string	zombie1;
	std::string	zombie2;

	std::cout << "input first zombiename" << std::endl;
	zombie1 << std::cin;
	Zombie::randomChump(Zombie1);
	std::cout << << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << << std::endl;

	std::cout << "input second zombiename" << std::endl;
	zombie2 << std::cin;
	Zombie::newZombie(zombie2);
}