#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack<T> &Init);
    MutantStack<T> &operator=(const MutantStack<T> &Init);
    ~MutantStack();

private:
    std::stack<T> buffer;
    unsigned int top;
    bool isEmpty;

public:
    void push(T t);
    T pop();
    T top();
};

template <class T>
MutantStack<T>::MutantStack() : top(-1), isEmpty(true)
{
    std::cout << "[MutantStack] Constructor is called" << std::endl;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &Init) : top(Init.top), isEmpty(Init.isEmpty)
{
    (void)Init;
}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &Init)
{
    if (this == &Init)
        return *this;
    this->top = Init.top;
}

template <class T>
MutantStack<T>::~MutantStack()
{
    std::cout << "[MutantStack] Distructor is called" << std::endl;
}

template <typename T>
void MutantStack<T>::push(T element)
{
    if (!isEmpty)
    {
        T LastMin = buffer.top();

        if (element < LastMin)
            buffer.push(element);
        else
            buffer.push(LastMin);
    }
    else
        buffer.push(element);
    // this->push(element);
}

template <typename T>
T MutantStack<T>::pop()
{
    buffer.pop();
    T out = this.top();
    this.pop();
    return out;
}

template <typename T>
T MutantStack<T>::top()
{
    T out = this->buffer.top();   
    return out;
}
#endif