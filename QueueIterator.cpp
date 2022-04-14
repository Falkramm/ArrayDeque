//
// Created by user on 14/04/2022.
//

#include "QueueIterator.h"

QueueIterator::QueueIterator(int *position) : position(position) {}

QueueIterator::QueueIterator() : position(0) {}

QueueIterator::QueueIterator(QueueIterator &It) : position(It.position) {}
QueueIterator QueueIterator::operator ++(int)
{
    QueueIterator copy=*this;
    position++;
    return copy;
}
QueueIterator QueueIterator::operator --(int)
{
    QueueIterator copy=*this;
    position--;
    return copy;
}

bool QueueIterator::operator==(const QueueIterator &rhs) const {
    return position == rhs.position;
}

bool QueueIterator::operator!=(const QueueIterator &rhs) const {
    return !(rhs == *this);
}
int & QueueIterator::operator*() {
    return *position;
}

int *QueueIterator::getPosition() const {
    return position;
}
