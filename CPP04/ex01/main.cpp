#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
    {
        std::cout << "TEST 1" << std::endl;
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        Animal animal1("unknown_type");
        Animal animal2;
        delete j;//should not create a leak
        delete i;
        animal1.makeSound();
        animal2.makeSound();
    }
    {
        std::cout << "TEST 2" << std::endl;
        int k = 5;
        Animal* animals[k];
        for(int i = 0; i < k; i++)
        {
            if (i % 2)
                animals[i] = new Cat();
            else
                animals[i] = new Dog();
            std::cout << animals[i]->getType() << std::endl;
        }
        for(int i = 0; i < k; i++)
            delete animals[i];
    }
    return 0;
}
