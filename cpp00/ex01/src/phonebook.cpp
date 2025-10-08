#include "../includes/megaphone.hpp"

PhoneBook::PhoneBook()
{
    _ctd = 0;
}

PhoneBook::~PhoneBook()
{    
}

Contact GetInfo(void)
{
    Contact contact;
    std::string input;

    std::cout << "Enter First Name: ";
    if (!getInput(input)) return contact;
    while (!contact.SetFirstName(input))
    {
        std::cout << "Enter First Name: ";
        if (!getInput(input)) return contact;
    }

    std::cout << "Enter Last Name: ";
    if (!getInput(input)) return contact;
    while (!contact.SetLastName(input))
    {
        std::cout << "Enter Last Name: ";
        if (!getInput(input)) return contact;
    }

    std::cout << "Enter Nickname: ";
    if (!getInput(input)) return contact;
    while (!contact.SetNickname(input))
    {
        std::cout << "Enter Nickname: ";
        if (!getInput(input)) return contact;
    }

    std::cout << "Enter Phone Number: ";
    if (!getInput(input)) return contact;
    while (!contact.SetPhoneNumber(input))
    {
        std::cout << "Enter Phone Number: ";
        if (!getInput(input)) return contact;
    }

    std::cout << "Enter your Darkest Secret: ";
    if (!getInput(input)) return contact;
    while (!contact.SetDarkestSecret(input))
    {
        std::cout << "Enter your Darkest Secret: ";
        if (!getInput(input)) return contact;
    }

    return contact;
}

void PhoneBook::Add()
{
    Contact contact = GetInfo();
    if (contact.GetFirstName().empty())
    {
        std::cout << "Operation cancelled (EOF detected)." << std::endl;
        return;
    }
    _contacts[_ctd % 8] = contact;
    _ctd++;
}

void PhoneBook::Search()
{
    std::string temp;

    if (_ctd == 0)
    {
        std::cout << "No contacts available" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name"  << "|"
              << std::setw(10) << "Nickname"   << std::endl;
    for (int ctd = 0; ctd < _ctd && ctd < 8; ctd++)
    {
        std::cout << std::setw(10) << ctd << "|";
        temp = _contacts[ctd].GetFirstName();
        temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
        std::cout << std::setw(10) << temp << "|";
        temp = _contacts[ctd].GetLastName();
        temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
        std::cout << std::setw(10) << temp << "|";
        temp = _contacts[ctd].GetNickname();
        temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
        std::cout << std::setw(10) << temp << std::endl;
    }
    while (true)
    {
        std::cout << "Enter index of contact: ";
        if (!getteline(temp))
        {
            std::cout << "EOF detected, returning to main menu..." << std::endl;
            return;
        }
        if (temp.length() != 1 || temp[0] < '0' || temp[0] > '7' || temp[0] - '0' >= _ctd)
        {
            std::cout << "Invalid index" << std::endl;
        }
        else
        {
            int idx = temp[0] - '0';
            _contacts[idx].PrintContact(); // mostrar o contacto escolhido
            break;
        }
    }
}