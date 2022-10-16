#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void)
{
    srand (time(NULL));
    int randNum = (rand() % 3) + 1;
    if (randNum == 1)
        return new A();
    if (randNum == 2)
        return  new B();
    if (randNum == 3)
        return new C();
    return (new A());
}

void identify(Base* p)
{
    if (p == NULL)
        return;
    if(dynamic_cast<A *>(p) != NULL)
        std::cout<< "A";
    else if(dynamic_cast<B *>(p) != NULL)
        std::cout<< "B";
    else if(dynamic_cast<C *>(p) != NULL)
        std::cout<< "C";
    std::cout<<std::endl;

}

void identify(Base& p)
{
    try
    {
        Base& base = dynamic_cast<A&>(p);
        //void(base);
        std::cout<< "identify (Base& p) p as class - A"<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Base& base = dynamic_cast<B&>(p);
        //void(base);
        std::cout<< "identify (Base& p) p as class - B"<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Base& base = dynamic_cast<C&>(p);
        //void(base);
        std::cout<< "identify (Base& p) p as class - C"<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
        Base* base = generate();
        identify(base);
        identify(*base);
        delete(base);
    return(0);
}