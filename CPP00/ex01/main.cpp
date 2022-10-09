#include <iostream>
#include <string>
#include "phonebook.hpp"

int main(void)
{
    std::string com;
    PhoneBook phoneBook;

    std::cout << "Welcome! Use commands ADD, SEARCH, EXIT" << std::endl;
    while (1)
    {
        std:: cout << ">";
        getline(std::cin, com);
        if (com.compare("ADD") == 0)
            phoneBook.add_contact();
        else if (com.compare("SEARCH") == 0)
            phoneBook.search_contact();
        else if (com.compare("EXIT") == 0)
            exit(0);
        else if (com.compare("") == 0)
            continue;
        else
            std::cout << "Wrong input. Use ADD, SEARCH, EXIT\n";
    }
    return (0);
}