#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void  Test1(void) {
    std::cout << "\n**** TEST1 ****" << std::endl << std::endl;
    ScavTrap a("Ivan");

    a.attack("fuga");
    a.takeDamage(5);
    a.beRepaired(10);
    for (int i = 0; i < 10; i++) {
        a.beRepaired(10);
    }
    a.takeDamage(1000);
    a.attack("Ted");
    a.takeDamage(0);
    a.beRepaired(10);
}

void Test2()
{
    std::cout << "\n**** TEST2 ****" << std::endl << std::endl;
    ScavTrap A("Elik");
    ScavTrap B("Luk");

    A.attack("TARGET A");
    B.attack("TARGET B");

    A.takeDamage(5);
    B.takeDamage(8);

    A.beRepaired(1);
    B.beRepaired(6);

    A.takeDamage(5);
    B.takeDamage(11);

    A.beRepaired(10);
    B.beRepaired(15);

    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);

    A.takeDamage(5);
    A.attack("TARGET A");
    A.attack("TARGET A");
}

void  Test3(void) {
    std::cout << "\n**** TEST3 ****" << std::endl << std::endl;

    ScavTrap a("hoge");
    ScavTrap b(a);
    ScavTrap c;
    ScavTrap d("fuga");
    c = b;
}

void	Test4(void) {
    std::cout << "\n**** TEST4 ****" << std::endl << std::endl;
    ScavTrap a("Elik");
    a.attack("Luk");
    a.takeDamage(6);
    a.beRepaired(4);
    a.takeDamage(3);
    a.guardGate();
    a.beRepaired(8);
    a.takeDamage(17);
}

void	Test5(void) {
    std::cout << "\n**** TEST5 ****" << std::endl << std::endl;
    ClapTrap b("Elik");
    b.attack("Luk");
    b.takeDamage(6);
    b.beRepaired(4);
    b.takeDamage(3);
    b.beRepaired(8);
    b.takeDamage(17);
}

int main( void ) {
    //Test1();
    //Test2();
    //Test3();
    Test4();
    Test5();
    return 0;
}