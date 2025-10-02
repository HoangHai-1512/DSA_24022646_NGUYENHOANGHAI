//
// Created by Hai on 10/2/2025.
//

#include "Queue.h"

// Dung list ( them cuoi - xoa dau)
bool Queue::isEmpty() {
    if (list.size == 0) return true;
    else return false;
}
void Queue::enqueue(int item) {
    list.addLast(item);
}
int Queue::dequeue() {
    if (isEmpty()) return -1;
    int tmp = list.get(0);
    list.deleteFirst();
    return tmp;
}
int Queue::peek() {
    if (isEmpty()) return -1;
    return list.get(0);
}
int Queue::size() {
    return list.size;
}

//Dung linked list ( add cuoi xoa dau )
bool Queue::isEmpty1() {
    if (llist.head == nullptr) return true;
    else return false;
}
void Queue::enqueue1(int item) {
    llist.addLast(item);
}
int Queue::dequeue1() {
    if (isEmpty()) return -1;
    int res = llist.head->data;
    llist.deleteFirst();
    return res;
}
int Queue::peek1() {
    if (isEmpty()) return -1;
    return llist.get(0);
}
int Queue::size1() {
    int size = 0;
    Node* tmp = llist.head;
    while (tmp != nullptr) {
        size++;
        tmp = tmp->next;
    }
    return size;
}
