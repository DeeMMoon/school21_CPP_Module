#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <set>

class Span {
    std::multiset<int> value;
    unsigned int size;

public:
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();
    Span operator=(Span const &src);
    void addNumber(int number);
    unsigned int longestSpan();
    unsigned int shortestSpan();

    template<typename T>
    void addNumber(T begin, T end)
    {
        if(end - begin + value.size() <= size)
            value.insert(begin, end);
        else
            throw Span::SpanOverFlowException();
    }

    class SpanCantToFindException : public std::exception{
        virtual const char *what() const throw() {
            return "Span can't find element";
        }
    };
    class SpanOverFlowException : public std::exception {
        virtual const char *what() const throw() {
            return "Span has not enough spase to add a new element";
        }
    };
};


#endif
