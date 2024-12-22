#include "MutantStack.hpp"

int main(){
    MutantStack<int> mstack;
    mstack.push(2);
    mstack.push(10);
    std::cout << mstack.top() << std::endl;
}