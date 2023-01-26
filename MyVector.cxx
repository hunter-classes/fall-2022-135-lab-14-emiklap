#include "MyVector.h"
#include <iostream>

template<typename T>
MyVector<T>::MyVector() {
    cap = 5;
    numOfElements = 0;
    arr = new T[cap];
}

template<typename T>
int MyVector<T>::size() {
    return numOfElements;
}

template<typename T>
int MyVector<T>::capacity() {
  return cap;
}

template<typename T>
bool MyVector<T>::empty() {
  if (numOfElements == 0) {
    return true;
  }
  return false;
}

template<typename T>
void MyVector<T>::push_back(T item) {
  if (numOfElements + 1 <= cap) {
    arr[numOfElements] = item;
    numOfElements++;
  } else {
    T *arrNew = new T[cap * 2];
    for (int i = 0; i < numOfElements; i++) {
      arrNew[i] = arr[i];
    }
    arrNew[numOfElements] = item;
    numOfElements++;
    cap = cap*2;
    delete[] arr;
    arr = arrNew;
    delete[] arrNew;
    arrNew = nullptr;
  }
  return;
}

template<typename T>
void MyVector<T>::pop_back(int num) {
  for (int i = 0; i < num; i++) {
    numOfElements--;
  }
  return;
}

template<typename T>
void MyVector<T>::pop_back() {
  numOfElements--; //this will make it so that we can only call elements that are within the numOfElements count
  return;
}

template<typename T>
void MyVector<T>::clear() {
  arr = new T[cap];
  numOfElements = 0;
  return;
}

template<typename T>
T &MyVector<T>::operator[] (int i) {
  if (i <= numOfElements) {
    return arr[i];
  }
  return arr[cap+1];
}
