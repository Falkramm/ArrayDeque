#include <iostream>
#include "ArrayDeque.h"
int main() {

ArrayDeque arr;
//4321
arr.push_front(1);
    arr.push_front(2);
    arr.push_front(3);
    arr.push_front(4);
std::cout << arr.front();

}
