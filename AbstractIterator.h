//
// Created by user on 14/04/2022.
//

#ifndef ARRAYDEQUE_ABSTRACTITERATOR_H
#define ARRAYDEQUE_ABSTRACTITERATOR_H


class AbstractIterator {
    virtual int & operator*()=0;
    virtual bool operator!=(AbstractIterator& It)=0;

};


#endif //ARRAYDEQUE_ABSTRACTITERATOR_H
