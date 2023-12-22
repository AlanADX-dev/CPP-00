#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

	private :
		Contact m_contact[9];
		int		numContacts;
		int		indContacts;

	public :

		PhoneBook();
		~PhoneBook();

		void	addcontact(const Contact &newContact);
		void	searchcontact();


};

#endif
