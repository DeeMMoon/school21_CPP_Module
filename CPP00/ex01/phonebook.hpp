#ifdef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int index;
        int len;
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
        void search_contact();
        void print_contact(int index);
        void print_head();
        void display_contacts();
};

#endif