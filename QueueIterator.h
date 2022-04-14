//
// Created by user on 14/04/2022.
//

#ifndef ARRAYDEQUE_QUEUEITERATOR_H
#define ARRAYDEQUE_QUEUEITERATOR_H

#include "AbstractIterator.h"

class QueueIterator {

private:
    int *position;
public:
    QueueIterator(int *position);

    QueueIterator();

    QueueIterator(QueueIterator &It);
    QueueIterator operator ++(int);
    QueueIterator operator --(int);
    int &operator*();
    bool operator==(const QueueIterator &rhs) const;

    bool operator!=(const QueueIterator &rhs) const;

    int *getPosition() const;

};


#endif //ARRAYDEQUE_QUEUEITERATOR_H
