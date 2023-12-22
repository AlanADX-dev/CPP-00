#include "PhoneBook.hpp"

void	ft_add(PhoneBook *Book)
{
	std::string	input;
	Contact		NewContact;
	// NewContact = new Contact();

	while (true)
	{
		std::cout << "Please enter the contact's firstname : ";
		std::getline(std::cin, input);

		if (!input.empty())
		{
			NewContact.setfirstname(input);
			break;
		}
		else
		{
			std::cout << "Firstname cannot be empty. Please try again." << std::endl;
		}
	}
	while (true)
	{
		std::cout << "Please enter the contact's lasttname : ";
		std::getline(std::cin, input);

		if (!input.empty())
		{
			NewContact.setlastname(input);
			break;
		}
		else
		{
			std::cout << "Lastname cannot be empty. Please try again." << std::endl;
		}
	}
	while (true)
	{
		std::cout << "Please enter the contact's nickname : ";
		std::getline(std::cin, input);

		if (!input.empty())
		{
			NewContact.setnickname(input);
			break;
		}
		else
		{
			std::cout << "Nickname cannot be empty. Please try again." << std::endl;
		}
	}
	while (true)
	{
		std::cout << "Please enter the contact's phone number : ";
		std::getline(std::cin, input);

		if (!input.empty())
		{
			NewContact.setphonenumber(input);
			break;
		}
		else
		{
			std::cout << "Phone number cannot be empty. Please try again." << std::endl;
		}
	}
	while (true)
	{
		std::cout << "Please enter the darkest contact's secret : ";
		std::getline(std::cin, input);

		if (!input.empty())
		{
			NewContact.setdarkestsecret(input);
			break;
		}
		else
		{
			std::cout << "Darkest secret cannot be empty. Please try again." << std::endl;
		}
	}


	Book->addcontact(NewContact);
}


// void ft_exit(PhoneBook* Book)
// {
//     for (int i = 0; i < 8; i++)
//         delete &Book->m_contact[i];

//     delete Book;
//     exit(0);
// }

int		main()
{
	std::string	cmd;
	PhoneBook	Book;
	// Book = new PhoneBook();

	while (true)
	{
		std::cout << "Type 'ADD' or 'SEARCH' a contact, or 'EXIT' for leave the program :";
		std::getline(std::cin, cmd);
		std::cout << std::endl;

		if (cmd.compare("ADD") == 0)
			ft_add(&Book);
		else if (cmd.compare("SEARCH") == 0)
			Book.searchcontact();
		else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "\033[1;31mOnly 'ADD', 'SEARCH', and 'EXIT' are valid commands.\033[0m" << std::endl;
	}
	// delete Book;
	return(0);
}
