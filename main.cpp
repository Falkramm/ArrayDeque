#include <iostream>
#include "ArrayDeque.h"
int main() {

ArrayDeque arr;
//23
arr.push_front(3);
arr.push_front(2);
arr.pop_front();
arr.pop_front();
std::cout << arr.back();

}
