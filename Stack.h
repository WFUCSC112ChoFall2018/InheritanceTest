//
// Created by Samuel Cho on 11/16/18.
//

#ifndef INHERITANCETEST_STACK_H
#define INHERITANCETEST_STACK_H

#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T> {
public:
    Stack();
//    ~Stack();
};


#endif //INHERITANCETEST_STACK_H
