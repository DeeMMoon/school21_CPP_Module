#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void  test1(void) {
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

void test2()
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

void  test3(void) {
    std::cout << "\n**** TEST3 ****" << std::endl << std::endl;

    ScavTrap a("hoge");
    ScavTrap b(a);
    ScavTrap c;
    ScavTrap d("fuga");
    c = b;
}

void	test4(void) {
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

void	test5(void) {
    std::cout << "\n**** TEST5 ****" << std::endl << std::endl;
    ClapTrap b("Elik");
    b.attack("Luk");
    b.takeDamage(6);
    b.beRepaired(4);
    b.takeDamage(3);
    b.beRepaired(8);
    b.takeDamage(17);
}

void	test6(void) {
    std::cout << "\n**** TEST6 ****" << std::endl << std::endl;
	ScavTrap	def;
	ScavTrap	bob("Bob");
	FragTrap	frag;
	FragTrap	trap("Froggy");

	def = bob;
	std::cout << def.getName() << std::endl;
	bob.guardGate();
	frag = trap;
	trap.highFiveGuys();
	trap.attack("trashcan");
	trap.takeDamage(1000);
	trap.beRepaired(1000);
}

int main( void ) {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    return 0;
}