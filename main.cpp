#include <iostream>
#include "ArrayDeque.h"
int main() {

ArrayDeque arr;
//1234
//234
//34
//4
arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
std::cout << arr.back();
arr.pop_back();
    std::cout << arr.back();
    arr.pop_back();
    std::cout << arr.back();
    arr.pop_back();
    std::cout << arr.back();


}
