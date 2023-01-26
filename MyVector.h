#pragma once

template <typename T> class MyVector {
private:
    int cap;
    int numOfElements;
    T *arr;

public:
    MyVector();

    //void replaceThisMethod(T replaceThisParam);
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int num);
    void pop_back();
    void clear();
    T &operator[] (int);
};

#include "MyVector.cxx"
