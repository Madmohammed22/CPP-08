#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <algorithm>
#include <vector>

template <class T>
class Easyfind
{

    Easyfind();
    Easyfind(const Easyfind<T> &Init);
    Easyfind<T> &operator=(const Easyfind<T> &Init);
    ~Easyfind();

private:
    std::vector<T> buffer;
};

template <class T>
Easyfind<T>::Easyfind()
{
    std::cout << "[Easyfind] Constructor is called" << std::endl;
}

template <class T>
Easyfind<T>::Easyfind(const Easyfind<T> &Init)
{
    (void)Init;
}

template <class T>
Easyfind<T> &Easyfind<T>::operator=(const Easyfind<T> &Init)
{
    (void)Init;
}

template <class T>
Easyfind<T>::~Easyfind()
{
    std::cout << "[Easyfind] Distructor is called" << std::endl;
}

template <typename T>
int easyfind(T &buffer, int target)
{
    std::vector<int> holder;
    int size = sizeof(buffer) / sizeof(buffer[0]);
    for (int i = 0; i < size; i++)
        holder.push_back(buffer[i]);

    int flag = -1;
    for (size_t i = 0; i < holder.size(); i++)
    {
        if (target == holder[i])
            return holder[i];
        else
            flag = 0;
    }
    if (flag == 0)
        throw std::runtime_error("Target not found");
    return -1;
}
#endif