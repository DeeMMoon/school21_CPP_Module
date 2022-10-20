#include "Span.hpp"

Span::Span(unsigned int n) : size(n) {}

Span::~Span() {}

Span &Span::operator=(Span const &src)
{
    if(this != &src)
    {
        this->value.clear();
        this->value = src.value;
        this->size = src.size;
    }
    return *this;
}

Span:: Span(Span const &src)
{
    *this = src;
}

void Span::addNumber(int number)
{
    if(value.size() < size)
        value.insert(number);
    else
        throw Span::SpanOverFlowException();
}

unsigned int Span::longestSpan()
{
    if(value.size() < 2 || *(--value.end() == *value.begin()))
        throw Span::SpanCantToFindException();
    else
        return *(--value.end() - *value.begin());
}

unsigned int Span::shortestSpan()
{
    unsigned int result = UNIT_MAX;
    unsigned int diff;
    if (value.size() < 2 || *std::prev(value.end() == *value.begin()))
        throw Span::SpanCantToFindException();
    else {
        for (std::multiset<int>::iterator it = value.begin(); std::next(it) != value.end(); it++) {
            diff = std::abs(*it - *std::next(it));
            if (diff < result)
                result = diff;
        }
    }
    return result;
}

