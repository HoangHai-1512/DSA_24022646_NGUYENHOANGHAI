//
// Created by Hai on 10/2/2025.
//

#ifndef WEEK2_QUEUE_H
#define WEEK2_QUEUE_H
#include "List.h"
#include "LinkedList.h"

struct Queue {
    List list;
    LinkedList llist;
    bool isEmpty();
    void enqueue(int item);
    int dequeue();
    int peek();
    int size();

    bool isEmpty1();
    void enqueue1(int item);
    int dequeue1();
    int peek1();
    int size1();
};


#endif //WEEK2_QUEUE_H