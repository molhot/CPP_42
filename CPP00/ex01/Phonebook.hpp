/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:56:04 by marvin            #+#    #+#             */
/*   Updated: 2023/02/26 23:56:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <limits>
#include <iostream>

class Phonebook
{
    private:
		Contact	_contacts_[8];
		void	_addcontact_(void);
	
	public:
		Phonebook();
		~Phonebook();
		void	Manual(void);
		void	addcontact(int i);
		void	showcontact(int i);
};
