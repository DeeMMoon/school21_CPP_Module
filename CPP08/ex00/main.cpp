#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> cont;
    for(int i = 0; i < 10; i++)
        cont.push_back(i);
    std::vector<int>::iterator i = easyfind(cont, 5);
    if (cont.end() == i)
        std::cout << "Element doesn't find" << std::endl;
    else
       std::cout << "The first occurrence index is " << i - cont.begin() << std::endl;
    i = easyfind(cont, 100);
    if (cont.end() == i)
        std::cout << "Element doesn't find" << std::endl;
    else
        std::cout << "The first occurrence index is " << i - cont.begin() << std::endl;
}
