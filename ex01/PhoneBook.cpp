#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	numContacts = 0;
	indContacts = 0;
}
PhoneBook::~PhoneBook()
{

}

void	PhoneBook::addcontact(const Contact& newContact)
{
	this->numContacts += 1;
	this->indContacts += 1;
	if (numContacts > 8)
		numContacts = 8;
	if (indContacts > 8)
		indContacts = 1;
	m_contact[indContacts] = newContact;
	std::cout << "Contact added successfully." << std::endl;
	std::cout << numContacts << std::endl;
	std::cout << indContacts << std::endl;
}

void	PhoneBook::searchcontact()
{
	if (numContacts <= 0 or numContacts > 8)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}
	std::cout << std::setw(10) << "\033[34;01m     Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << " Last Name" << "|"
			<< std::setw(10) << "  Nickname\033[00m" << std::endl;
	for (int i = 1; i <= 8; ++i)
	{
		std::string FS, LN, NN;
		FS = m_contact[i].getfirstname();
		LN = m_contact[i].getlastname();
		NN = m_contact[i].getnickname();

		if (FS.size() > 10)
		{
			FS.resize(9);
			FS.resize(10, '.');
		}
		if (LN.size() > 10)
		{
			LN.resize(9);
			LN.resize(10, '.');
		}
		if (NN.size() > 10)
		{
			NN.resize(9);
			NN.resize(10, '.');
		}

		std::cout << std::setw(10) << i << "\033[34;01m|\033[00m"
			<< std::setw(10) << FS << "\033[34;01m|\033[00m"
			<< std::setw(10) << LN << "\033[34;01m|\033[00m"
			<< std::setw(10) << NN << std::endl;
	}
	int	index;
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	std::cin.ignore();

	if (index > 0 && index <= numContacts)
	{
		std::cout << std::endl;
		std::cout << "First Name: " << m_contact[index ].getfirstname() << std::endl;
		std::cout << "Last Name: " << m_contact[index].getlastname() << std::endl;
		std::cout << "Nickname: " << m_contact[index].getnickname() << std::endl;
		std::cout << "Phone Number: " << m_contact[index].getphonenumber() << std::endl;
		std::cout << "Darkest Secret: " << m_contact[index].getdarkestsecret() << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}

