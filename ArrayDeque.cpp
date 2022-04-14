//
// Created by user on 14/04/2022.
//

#include "ArrayDeque.h"
#include <iostream>
ArrayDeque::ArrayDeque() {
    arr = new int[2];
    size = 0;
    capacity = 2;
    begin = &arr[0];
    end = &arr[0];
}

void ArrayDeque::allocation() {
    capacity *= 2;
    int *copy = new int[capacity];
    int begin_p,end_p;
    begin_p=begin.getPosition()-arr;
    end_p=end.getPosition()-arr;
    for (int i = begin_p;i-begin_p<size; ++i) {
        copy[i-begin_p] = arr[i%capacity];
    }
    begin = &copy[0];
    end = &copy[size-1];
    arr=copy;
}

void ArrayDeque::push_back(int n) {
 if(size+1>=capacity)
     allocation();
 size++;
 if(size==1){
     *end=n;
 }
 else {
     int m = end.getPosition() - arr;
     if (m + 1 >= capacity)
         end = QueueIterator(&arr[0]);
     else
         end++;
     *end=n;
 }
}

void ArrayDeque::push_front(int n) {
    if(size+1>=capacity)
        allocation();
    size++;
    if(size==1)
    {
        *begin=n;
    }
    else {
        int m = begin.getPosition() - arr;
            if (m - 1 < 0)
                begin = QueueIterator(&arr[capacity - 1]);
            else
                begin--;
        *begin = n;
    }

}

void ArrayDeque::pop_back() {
    if(size==0)
        return;
size--;
    if(size>0) {
        int m = end.getPosition() - arr;
        if (m - 1 < 0)
            end = QueueIterator(&arr[capacity - 1]);
        else
            end--;
    }
}

void ArrayDeque::pop_front() {
    if(size==0)
        return;
size--;
    if(size>0) {
        int m = begin.getPosition() - arr;
        if (m + 1 >= capacity)
            begin = QueueIterator(&arr[0]);
        else
            begin++;
    }
}

int &ArrayDeque::front() {
    return *begin;
}

int &ArrayDeque::back() {
    return *end;
}

int ArrayDeque::size_() {
    return size;
}

int ArrayDeque::capacity_() {
    return capacity;
}


