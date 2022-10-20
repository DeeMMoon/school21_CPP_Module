#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std:: stack<T>{
public:
    MutantStack(void) : std::stack<T>(){};
    MutantStack(const MutantStack<T> &src) : std::stack<T> (src) {};
    ~MutantStack(){};
    MutantStack &operator=(const MutantStack<T> &src)
    {
        if(this != &src)
            this->c = src.c;
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(void){return this->c.begin();};
    iterator end(void){return this->c.end();};
    const_iterator begin(void){return this->c.begin();};
    const_iterator end(void){return this->c.end();};
    reverse_iterator begin(void){return this->c.rbegin();};
    reverse_iterator end(void){return this->c.rend();};
    const_reverse_iterator begin(void){return this->c.rbegin();};
    const_reverse_iterator end(void){return this->c.rend();};

};


#endif
