#include "Contact.hpp"

Contact::Contact()
{
	m_firstname = "";
	m_lastname = "";
	m_nickname = "";
	m_phonenumber = "";
	m_darkestsecret = "";
}

Contact::~Contact()
{

}
//GETTERS

std::string	Contact::getfirstname()
{
	return(m_firstname);
}

std::string	Contact::getlastname()
{
	return(m_lastname);
}

std::string	Contact::getnickname()
{
	return(m_nickname);
}

std::string	Contact::getphonenumber()
{
	return(m_phonenumber);
}

std::string	Contact::getdarkestsecret()
{
	return(m_darkestsecret);
}


//SETTERS

void	Contact::setfirstname(std::string firstname)
{
	this->m_firstname = firstname;
}

void	Contact::setlastname(std::string lastname)
{
	this->m_lastname = lastname;
}

void	Contact::setnickname(std::string nickname)
{
	this->m_nickname = nickname;
}

void	Contact::setphonenumber(std::string phonenumber)
{
	this->m_phonenumber = phonenumber;
}

void	Contact::setdarkestsecret(std::string darkestsecret)
{
	this->m_darkestsecret = darkestsecret;
}
