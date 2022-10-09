#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout<< "TEST BASE" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    std::cout<< "MY TEST" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongAnimal1 = new WrongCat();
    const WrongCat* wrongCat = new WrongCat();
    std::cout << wrongAnimal1->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal1->makeSound(); //will output the cat sound!
    wrongCat->makeSound();
    wrongAnimal->makeSound();
    delete wrongAnimal;
    delete wrongAnimal1;
    delete wrongCat;

    return (0);
}