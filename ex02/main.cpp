#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        for (int i = 0; i < 2; i++)
        {
            mstack.push(i);
        }
        std::cout << "Top :" << mstack.top() << std::endl;
        std::cout << "size :" << mstack.size() << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    {
        std::list<int> holder;
        for (int i = 0; i < 2; i++)
        {
            holder.push_back(i);
        }
        std::cout << "Top :" << holder.back() << std::endl;
        std::cout << "size :" << holder.size() << std::endl;
    }
}