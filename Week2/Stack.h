//
// Created by Hai on 10/2/2025.
//

#ifndef WEEK2_STACK_H
#define WEEK2_STACK_H
#include "List.h"
#include "LinkedList.h"

struct Stack {
    List list;
    LinkedList llist;
    bool isEmpty();
    void push(int item);
    int pop();
    int top();
    int size();

    bool isEmpty1();
    void push1(int item);
    int pop1();
    int top1();
    int size1();
};


#endif //WEEK2_STACK_H