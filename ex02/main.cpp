#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(10);
        mstack.push(1);
        mstack.push(1);
        mstack.push(1110);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        while (it != ite)
        {
            std::cout << *it << std::endl;
            std::cout << mstack.top() << std::endl;
            ++it;
        }
        // std::cout << *it << std::endl;
        // for (int i = it; i < 2; i++)
        // {
        //     mstack.push(i);
        // }
        // std::cout << "Top :" << mstack.top() << std::endl;
        // std::cout << "size :" << mstack.size() << std::endl;
    }
    // std::cout << "-------------------" << std::endl;
    // {
    //     std::list<int> holder;
    //     std::list<int>::iterator it = holder.front();
    //     for (int i = 0; i < 2; i++)
    //     {
    //         holder.push_back(i);
    //     }
    //     std::cout << "Top :" << holder.back() << std::endl;
    //     std::cout << "size :" << holder.size() << std::endl;
    // }
}