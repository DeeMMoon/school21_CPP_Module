#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
    std::string getType(void)const;
private:
    WrongCat(WrongCat const& other);
    WrongCat& operator=(WrongCat const& assign);
};

#endif
