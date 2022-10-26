#include <assert.h>
#include "arrayStack.h"
#include <iostream>

template <typename T>
void ArrayStack<T>::push(T e)
{
    int numelem = sp - data;
    if (size == numelem)
    {
        resize();
    }
    *sp = e;
    sp++;
    //assert(*sp == e);
}

template <typename T>
void ArrayStack<T>::pop()
{
    assert(!empty());
    sp--;
}

template <typename T>
T ArrayStack<T>::top()
{
    assert(!empty());
    return *(sp - 1);
}

template <typename T>
bool ArrayStack<T>::empty()
{
    int numelem = sp - data;
    return numelem == 0;
}

template <typename T>
void ArrayStack<T>::resize()
{
    assert(syse = sp - data);
    T newData[] = new T[size + FACTOR];
    for (int i = 0; i < size; i++)
    {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    sp = newData + size;
    size += FACTOR;
}

template <typename T>
void ArrayStack<T>::printArray()
{
    assert(!empty());
    for (int i = 0; i < size; i++)
    {
        std::cout << (i+1) << "  :  " << data[i] << "\n";
    }
}
