/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:55:54 by marvin            #+#    #+#             */
/*   Updated: 2023/02/26 23:55:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <limits>
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void    Contact::init(void)
{
    std::cout << "input firstname" << std::endl;
    this->_firstname = "test";
}

void    Contact::content_show(void)
{
    std::cout << this->_firstname << std::endl;
}