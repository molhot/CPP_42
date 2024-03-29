/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:35:52 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 19:35:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &cpzombie);
		Zombie& operator=(const Zombie &cpzombie);
		~Zombie();
		void	makesound();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);