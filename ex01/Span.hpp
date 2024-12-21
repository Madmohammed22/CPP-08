#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <algorithm>
#include <vector>

template <class T>
class Span
{

    Span();
    Span(unsigned int N);
    Span(const Span<T> &Init);
    Span<T> &operator=(const Span<T> &Init);
    ~Span();
    int getSize();
public:
    T buffer;
    int size;
};

template <class T>
Span<T>::Span() : size(0)
{
    std::cout << "[Span] Constructor is called" << std::endl;
}

template <class T>
Span<T>::Span(unsigned int N)
{
    this->buffer = new T[N];
    this->size = this->buffer.size();
    for (int i = 0; i < this->buffer.size(); i++)
        this->buffer[i] = 0;
    
    std::cout << "[Span] Parametrize constructor is called" << std::endl;
}

template <class T>
Span<T>::Span(const Span<T> &Init) : size(Init.size)
{
    for (int i = 0; i < this->size; i++)
        this->buffer[i] = Init.buffer[i];
}

template <class T>
Span<T> &Span<T>::operator=(const Span<T> &Init)
{
    if (this == &Init)
        return *this;
    delete[] this->buffer;
    this->buffer = new T[Init.getSize()];
    for (int i = 0; i < this->size; i++)
        this->buffer[i] = Init.buffer[i];
}

template <class T> int Span<T>::getSize(){
    int size = this->buffer.size();
    return size;
}

template <class T>
Span<T>::~Span()
{
    delete [] this->buffer;
    std::cout << "[Span] Distructor is called" << std::endl;
}

#endif