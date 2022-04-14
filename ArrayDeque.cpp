//
// Created by user on 14/04/2022.
//

#include "ArrayDeque.h"

ArrayDeque::ArrayDeque() {
    arr = new int[2];
    size = 0;
    capacity = 2;
    begin = &arr[0];
    *begin=0;
    end = &arr[0];
}

void ArrayDeque::allocation() {
    capacity *= 2;
    int *copy = new int[capacity];
    for (int i = 0; begin != end; ++i) {
        copy[i] = *begin;
        begin++;
    }
    begin = &copy[0];
    end = &copy[size + 1];
}

void ArrayDeque::push_back(int n) {
 if(size+1>=capacity)
     allocation();
 size++;
 *end=n;
 int m=end.getPosition()-arr;
 if(m+1>=capacity)
     end=QueueIterator(&arr[0]);
 else
     end++;
}

void ArrayDeque::push_front(int n) {
    if(size+1>=capacity)
        allocation();
    size++;
    int m=begin.getPosition()-arr;
    if(size>1) {
        if (m - 1 < 0)
            begin = QueueIterator(&arr[capacity - 1]);
        else
            begin--;
    }
    *begin=n;

}

void ArrayDeque::pop_back() {
size--;
    int m=end.getPosition()-arr;
    if(m-1<0)
        end=QueueIterator(&arr[capacity-1]);
    else
        end--;
}

void ArrayDeque::pop_front() {
size--;
    int m=begin.getPosition()-arr;
    if(m+1>=capacity)
        begin=QueueIterator(&arr[0]);
    else
        begin++;
}

int &ArrayDeque::front() {
    return *begin;
}

int &ArrayDeque::back() {
    int m=end.getPosition()-arr;
    m--;
    if(m<0)
        return arr[capacity-1];
    else
        return arr[m];
}

int ArrayDeque::size_() {
    return size;
}

int ArrayDeque::capacity_() {
    return capacity;
}


