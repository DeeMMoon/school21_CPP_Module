#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void )
{

    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    typedef void (Harl::*POINTER)(void);
    POINTER f[4];
   f[0] = &Harl::debug;
   f[1] = &Harl::info;
   f[2] = &Harl::warning;
   f[3] = &Harl::error;
    switch (stoi(level))
    {
        case 0:
            (this->*f[0])();
            std::cout << std::endl;
        case 1:
            (this->*f[1])();
            std::cout << std::endl;
        case 2:
            (this->*f[2])();
            std::cout << std::endl;
        case 3:
            (this->*f[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}