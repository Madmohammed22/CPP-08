#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        for (int i = 0; i < 2; i++)
        {
            mstack.push(i);
        }
        // mstack.push(0);
        // mstack.push(1);
        // mstack.push(2);
        // mstack.push(3);
        // mstack.pop();
        // mstack.pop();
        // mstack.pop();
        //-----
        // mstack.pop();
        std::cout << "Top :" << mstack.top() << std::endl;
        std::cout << "size :" << mstack.size() << std::endl;
    }
    // std::cout << "-------------------" << std::endl;
    // {
    //     std::stack<int> holder;
    //     // holder.push(0);
    //     // holder.push(1);
    //     // holder.push(2);
    //     // holder.push(3);
    //     // holder.pop();
    //     // holder.pop();
    //     // holder.pop();
    //     //---------
    //     // holder.pop();
    //     std::cout << "Top :"<< holder.top() << std::endl;
    //     std::cout << "size :"<< holder.size() << std::endl;
    // }
    std::cout << "-------------------" << std::endl;
    {
        std::list<int> holder;
        for (int i = 0; i < 2; i++)
        {
            holder.push_back(i);
        }
        std::cout << "Top :" << holder.back() << std::endl;
        std::cout << "size :" << holder.size() << std::endl;

        // std::cout << holder.f << std::endl;
    }
}