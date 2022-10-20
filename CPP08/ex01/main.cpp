#include "Span.hpp"
#include <vector>
#include <ctime>
#include <cstdlib>

template <typename T>
void print(T &arr)
{
    for (typename T::iterator it = arr.begin(); it != arr.end(); it++)
        std::cout << it << " ";
    std::cout<<std::endl;
}
int main()
{
    std::srand(std::time(nullptr));
    Span small(5);
    
    try{
        small.addNumber(2);
        small.addNumber(5);
        small.addNumber(0);
        small.addNumber(100);
        small.addNumber(30);
        std::cout<< "shortest = "<< small.shortestSpan() << std::endl;
        std::cout<< "longest = "<< small.longestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr<< e.what() << std::endl;
    }

    Span medium(1000);
    std::vector<int> arr;
    for (int i = 1; i < 1000; i++)
        arr.push_back(std::rand());
    try{
        medium.addNumber(arr.begin(), arr.end());
        std::cout<< "shortest = "<< medium.shortestSpan() << std::endl;
        std::cout<< "longest = "<< medium.longestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr<< e.what() << std::endl;
    }

    Span large(5000);
    std::vector<int> big_arr;
    for (int i = 1; i < 5000; i++)
        big_arr.push_back(std::rand());
    try{
        medium.addNumber(big_arr.begin(), big_arr.end());
        std::cout<< "shortest = "<< large.shortestSpan() << std::endl;
        std::cout<< "longest = "<< large.longestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr<< e.what() << std::endl;
    }

    Span ex(1);
    try{
        ex.longestSpan();
    }
    catch (const std::exception &e) {
        std::cerr<< e.what() << std::endl;
    }
    ex.addNumber(4);
    try{
        ex.shortestSpan();
    }
    catch (const std::exception &e) {
        std::cerr<< e.what() << std::endl;
    }


}
