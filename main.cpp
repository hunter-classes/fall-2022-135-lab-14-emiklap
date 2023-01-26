#include "MyVector.h"
#include <iostream>

int main() {
    MyVector<int> testVectorInt;
    std::cout << "DEMO OF MyVector<int>\n";

    testVectorInt.push_back(1);
    testVectorInt.push_back(2);
    testVectorInt.push_back(3);
    for (int i = 0; i < testVectorInt.size(); i++) {
        std::cout << "testVectorInt[" << i << "] = " << testVectorInt[i] << "\n";
    }


    MyVector<std::string> testVectorStr;
    std::cout << "\nDEMO OF MyVector<std::string>\n";

    testVectorStr.push_back("Hello");
    testVectorStr.push_back("World");
    testVectorStr.push_back("!!!!!");
    for (int i = 0; i < testVectorStr.size(); i++) {
        std::cout << "testVectorInt[" << i << "] = " << testVectorStr[i] << "\n";
    }

    std::cout << "\n" << "To see more tests see tests.cpp\n";

    return 0;
}
