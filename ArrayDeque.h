//
// Created by user on 14/04/2022.
//

#ifndef ARRAYDEQUE_ARRAYDEQUE_H
#define ARRAYDEQUE_ARRAYDEQUE_H

#include "AbstractDeque.h"
#include "QueueIterator.h"
class ArrayDeque: public AbstractDeque {
private:
    int *arr;
    int size;
    int capacity;
    QueueIterator begin,end;
    void allocation();
public:
    ArrayDeque();
    void push_back(int n);
    void push_front(int n);
    void pop_back();
    void pop_front();
    int & front();
    int & back();
    int size_();
    int capacity_();
};

#endif //ARRAYDEQUE_ARRAYDEQUE_H
