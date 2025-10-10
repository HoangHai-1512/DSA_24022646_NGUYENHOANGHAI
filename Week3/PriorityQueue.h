
#ifndef WEEEK3_PRIORITYQUEUE_H
#define WEEEK3_PRIORITYQUEUE_H

#include "List.cpp"

struct priorityQueue { // Max priority Queue
    List list;
    void init();
    void insert(int value);
    int delMax();
    bool isEmpty();
    int max();
    int size();
    void print();
};



#endif //WEEEK3_PRIORITYQUEUE_H