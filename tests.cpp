#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "MyVector.h"
#include "doctest.h"

MyVector<int> testVectorInt;
MyVector<std::string> testVectorStr;


TEST_CASE("push_back()") {
    testVectorInt.push_back(0);
    CHECK(testVectorInt[0] == 0);
    testVectorInt.push_back(1);
    CHECK(testVectorInt[1] == 1);
    testVectorInt.push_back(2);
    CHECK(testVectorInt[2] == 2);

    testVectorStr.push_back("Hello");
    CHECK(testVectorStr[0] == "Hello");
    testVectorStr.push_back("World");
    CHECK(testVectorStr[1] == "World");
}

TEST_CASE("size()") {
    CHECK(testVectorInt.size() == 3);
    CHECK(testVectorStr.size() == 2);
}

TEST_CASE("pop_back()") {
    testVectorInt.pop_back(2);
    CHECK(testVectorInt[0] == 0); // check if the first element is still there

    testVectorStr.pop_back();
    CHECK(testVectorStr[0] == "Hello");
}

TEST_CASE("capacity()") {
    CHECK(testVectorInt.capacity() == 5);
    for (int i = 1; i <= 5; i++) {
            testVectorInt.push_back(i); //adding more ints to this object, should expand the array
    }
    CHECK(testVectorInt.capacity() == 10);
}

TEST_CASE("Operation Overload"){
    testVectorInt[1] = 11111;
    CHECK(testVectorInt[1] == 11111);
    testVectorStr[0] = "HELLO";
    CHECK(testVectorStr[0] == "HELLO");
}

TEST_CASE("empty() and clear()") {
    CHECK(testVectorInt.empty() == false); //before clear, should NOT be empty
    testVectorInt.clear();
    CHECK(testVectorInt.empty() == true); //after clear, SHOULD be empty
    CHECK(testVectorStr.empty() == false); //the other MyVector should not be affected (it should be NOT empty)
}


