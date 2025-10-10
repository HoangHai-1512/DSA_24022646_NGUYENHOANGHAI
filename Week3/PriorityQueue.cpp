
#include "PriorityQueue.h"

void priorityQueue::init() {
    list.size = 0;
}
// Moi lan them 1 phan tu la sort luon giam dan
void priorityQueue::insert(int value) {
    if (list.size == MAX) {
        cout << "Hang doi da day";
    }
    list.size++;
    list.arr[list.size] = value;
    list.sortArr();
}
int priorityQueue::delMax() {
    if (isEmpty()) {
        cout << "Hang doi rong";
        return -1;
    }
    int maxVal = list.arr[0];
    list.deleteFirst();
    return maxVal;
}

bool priorityQueue::isEmpty() {
    if (list.size == 0) return true;
    return false;
}
int priorityQueue::max() {
    if (isEmpty()) {
        cout << "Hang doi rong";
        return -1;
    }
    return list.arr[0];
}
int priorityQueue::size() {
    return list.size;
}

void priorityQueue::print() {
    for (int i = 0; i < list.size - 1 ; i++) {
        cout << list.arr[i] << " ";
    }
}