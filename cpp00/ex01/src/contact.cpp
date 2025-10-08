#include "../includes/megaphone.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

bool Contact::SetFirstName(std::string name)
{
	if (name.empty())
		return (false);
	_first_name = name;
	return (true);
}

bool Contact::SetLastName(std::string name)
{
	if (name.empty())
		return (false);
	_last_name = name;
	return (true);
}

bool Contact::SetNickname(std::string name)
{
	if (name.empty())
		return (false);
	_nickname = name;
	return (true);
}

bool Contact::SetDarkestSecret(std::string name)
{
	if (name.empty())
		return (false);
	_darkest_secret = name;
	return (true);
}

bool Contact::SetPhoneNumber(std::string name)
{
	if (name.empty())
		return (false);
	_phone_number = name;
	return (true);
}

std::string Contact::GetFirstName(void)
{
	return (_first_name);
}

std::string Contact::GetLastName(void)
{
	return (_last_name);
}

std::string Contact::GetNickname(void)
{
	return (_nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (_phone_number);
}

std::string Contact::GetDarkestSecret(void)
{
	return (_darkest_secret);
}

void Contact::PrintContact(void)
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone Number : " << _phone_number << std::endl;
	std::cout << "Darkest Secret : " << _darkest_secret << std::endl;
}
