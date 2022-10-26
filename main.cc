#include "arrayStack.cc"
int main()
{
    ArrayStack<int> a(5);
    a.push(9);
    a.push(8);
    a.push(7);
    a.push(6);
    a.printArray();

}