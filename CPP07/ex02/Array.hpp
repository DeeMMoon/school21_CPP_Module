
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T* array;
    unsigned int len;
public:
    Array() : array(NULL), len(0){}
    Array(unsigned int n) : array (new T(n)), len(n){}
    Array(Array const &src) : array(NULL){ *this = src;}
    ~Array() { if (array) delete [] array;}
    unsigned int size() {return len;}
    Array &operator=(Array const &src)
    {
        if(this != &src)
        {
            if (this->array)
                delete []this->array;
            this->array = new T(src.len);
            this->len = src.len;
            for (unsigned int i = 0; i < len; i++)
                this->array[i]  = src.array[i];
        }
        return *this;
    }
    T &operator[](const unsigned int index)
    {
        if (index >= len)
            throw ArrayOutOfRange();
        return array[index];
    }
    T const &operator[](const unsigned int index) const
    {
        if (index >= len)
            throw ArrayOutOfRange();
        return array[index];
    }
    class ArrayOutOfRange : public std::exception
    {
    public:
        virtual const char *what() const throw(){
            return "Index is out of range of the array";
        }
    };

};
#endif
