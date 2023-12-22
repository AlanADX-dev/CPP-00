#ifndef CONTACT_HPP
# define CONTACT__HPP

#include <iostream>
#include <string>
#include <cstring>


class Contact {

	private:
		std::string m_firstname;
		std::string m_lastname;
		std::string m_nickname;
		std::string m_phonenumber;
		std::string m_darkestsecret;

	public:
		Contact();
		~Contact();

		void	setfirstname(std::string m_firstname);
		void	setlastname(std::string m_lastname);
		void	setnickname(std::string m_nickname);
		void	setphonenumber(std::string m_phonenumber);
		void	setdarkestsecret(std::string m_darkestsecret);

		std::string	getfirstname(void);
		std::string	getlastname(void);
		std::string	getnickname(void);
		std::string	getphonenumber(void);
		std::string	getdarkestsecret(void);
};

#endif
