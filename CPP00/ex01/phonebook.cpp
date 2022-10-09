#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_len = 0;
}
PhoneBook::~PhoneBook(){}

void PhoneBook::add_contact()
{
    std::string str;

    if(index == 8 && len == 8)
    {
        std:: cout << "The next contact will be overwritten" << std::endl;
        intdex = 0;
    }
    std::cout << "Input first_name: " << std::endl << ">";
    getline(std::cin, str);
    contacts[index].set_first_name(str);
    std::cout << "Input last_name: " << std::endl << ">";
    getline(std::cin, str);
    contacts[index].set_last_name(str);
    std::cout << "Input nickname: " << std::endl << ">";
    getline(std::cin, str);
    contacts[index].set_nickname(str);
    std::cout << "Input phone_number: " << std::endl << ">";
    getline(std::cin, str);
    contacts[index].set_phone_number(str);
    std::cout << "Input darkest_secret: " << std::endl << ">";
    getline(std::cin, str);
    contacts[index].set_darkest_secret(str);
    index ++;
    if (len != 8)
        len++;
}

void PhoneBook::search_contact(void)
{
    std::string index;
    this->display_contacts();
    std::cout << "Input index" << std::endl << ">";
    getline(std::cin, index);
    if (isdigit(index[0]) && index.compare("") != 0 && stoi(index) >= 0 && stoi(index) <= len - 1)
        this->print_contact(stoi(index));
    else
        std::cout << "Contact not found" << std::endl;
}

void PhoneBook::print_contact(int index)
{
    std::cout << "first_name: " << contacts[index].get_first_name << std::endl;
    std::cout << "last_name: " << contacts[index].get_last_name << std::endl;
    std::cout << "nickname: " << contacts[index].get_nickname << std::endl;
    std::cout << "phone_number: " << contacts[index].get_phone_number << std::endl;
    std::cout << "darkest_secret: " << contacts[index].get_darkest_secret << std::endl;
}

void PhoneBook::print_head(void)
{
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::display_contacts(void)
{
    int i = 0;
    this->print_head();
    while (len < i)
    {
        contacts[i].print_info(i);
        i++;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}
