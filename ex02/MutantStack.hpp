#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <deque>
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
    int Top;
    bool isEmpty;

public:
    void push(T t);
    void pop();
    T top();
    int size();
    // iterator end();
    public:
        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
};



template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return iterator(this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    return iterator(this->c.end())
    // return this->c.end();
}

template <class T>
MutantStack<T>::MutantStack() : Top(0), isEmpty(true)
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &Init) : Top(Init.Top), isEmpty(Init.isEmpty)
{
}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &Init)
{
    if (this == &Init)
        return *this;
    this->Top = Init.Top;
}

template <class T>
MutantStack<T>::~MutantStack()
{
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
        this->Top++;
    }
    else
    {
        this->Top++;
        buffer.push(element);
    }
}

template <typename T>
void MutantStack<T>::pop()
{
    if (this->Top != 0)
        buffer.pop();
    this->Top--;
}

template <typename T>
int MutantStack<T>::size()
{
    return this->Top;
}

template <typename T>
T MutantStack<T>::top()
{
    if (this->Top != 0)
        return this->buffer.top();
    else
        return 0;
}

#endif