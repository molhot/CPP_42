/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:20:20 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/05 14:20:20 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	//const Animal *dog = new Dog();
	//const Animal *cat = new Cat();
	//dog->makesound();
	//delete dog;
	//delete cat;
	//system("leaks ex01");

	Dog	DOOG;
	//Cat	CAAT;

	Dog& DOOOG = DOOG;
	//Cat& CAAAT = CAAT;

	Dog DOOOOOOOOOOG(DOOG);
	//Cat CAAAAAAAAAAT(CAAT);

	Dog& DG = DOOOOOOOOOOG;
}