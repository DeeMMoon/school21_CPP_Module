#include <string>
#include "contact.hpp"

Contact::Contact(){
    this->_first_name = "";
    this->_last_name = "";
    this->_nickname = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
}

Contact::~Contact(){}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

void Contact::print_info(int i)
{
    std::cout <<"|";
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << this->format_line(this->get_first_name()) <<"|";
    std::cout << std::setw(10) << this->format_line(this->get_last_name()) <<"|";
    std::cout << std::setw(10) << this->format_line(this->get_nickname()) <<"|"<< std::endl;
}

std::string Contact::format_line(std::string line)
{
    if (line.size() > 10)
        return(line.substr(0, 9) + '.');
    else
        return (line);
}

std::string Contact::get_first_name()
{
    return(this->first_name);
}

std::string Contact::get_last_name()
{
    return(this->last_name);
}

std::string Contact::get_nickname()
{
    return(this->nickname);
}

std::string Contact::get_phone_number()
{
    return(this->phone_number);
}

std::string Contact::get_darkest_secret()
{
    return(this->darkest_secret);
}