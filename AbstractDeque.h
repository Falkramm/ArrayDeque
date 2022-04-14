//
// Created by user on 14/04/2022.
//

#ifndef ARRAYDEQUE_ABSTRACTDEQUE_H
#define ARRAYDEQUE_ABSTRACTDEQUE_H

#include "AbstractContainer.h"

class AbstractDeque : public AbstractContainer {
    virtual void push_front(int n) = 0;
    virtual void push_back(int n) = 0;
    virtual void pop_front() = 0;
    virtual void pop_back() = 0;
    virtual int &front() = 0;

    virtual int &back() = 0;

    virtual int size_() = 0;

    virtual int capacity_() = 0;
};


#endif //ARRAYDEQUE_ABSTRACTDEQUE_H
