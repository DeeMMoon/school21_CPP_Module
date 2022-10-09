#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(std::string type);
    std::string getType(void)const;
    void makeSound() const;
private:
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& assign);
};
#endif
