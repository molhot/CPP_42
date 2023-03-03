/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:34:27 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 19:34:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int num, std::string name)
{
	int		i;
	Zombie	*zombiehorde;

	zombiehorde = new Zombie[num];
	i = 0;
	while (i != num)
	{
		zombiehorde[i].namedzombie(name);
		zombiehorde[i].makesound();
		i++;
	}
	return (zombiehorde);
}
