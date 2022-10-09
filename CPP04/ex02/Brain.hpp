#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define IDEAS 100
class Brain
{
private:
    std::string ideas[IDEAS];
public:
    Brain();
    Brain(Brain const& obj);
    Brain& operator=(Brain const& obj);
    ~Brain();
};

#endif
