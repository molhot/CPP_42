/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:09:11 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 12:09:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>
#include <iostream>

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void    Phonebook::Manual(void)
{
    std::cout << "this is phonebook app!" << std::endl;
    std::cout << "you can use three function" << std::endl;
    std::cout << "1 ADD 2 SEARCH 3 EXIT" << std::endl;
}

void    Phonebook::addcontact(int i)
{
    this->_contacts_[i % 8].init();
}

void    Phonebook::showcontact(int i)
{
    this->_contacts_[i % 8].content_show();
}
