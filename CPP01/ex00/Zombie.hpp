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

Class Zombie()
{
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		~Zombie();
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		void	makesound();
}