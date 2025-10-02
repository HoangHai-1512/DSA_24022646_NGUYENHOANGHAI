//
// Created by Hai on 10/2/2025.
//

#include "Stack.h"

// Dung list ( them cuoi - xoa cuoi)

bool Stack::isEmpty() {
    if (list.size == 0) return true;
    else return false;
}
void Stack::push(int item) {
    list.addLast(item);
}
int Stack::pop() {
    if (isEmpty()) return -1;
    int tmp = list.arr[list.size];
    list.deleteLast();
    return tmp;
}
int Stack::top() {
    if (isEmpty()) return -1;
    if (list.size == 0) return -1;
    return list.arr[list.size - 1];
}
int Stack::size() {
    return list.size;
}

//Dung linkedlist ( them dau - xoa dau )

bool Stack::isEmpty1() {
    if (llist.head == nullptr) return true;
    else return false;
}
void Stack::push1(int item) {
    llist.addFirst(item);
}
int Stack::pop1() {
    if (isEmpty1()) return -1;
    Node* tmp = llist.head;
    llist.head = llist.head->next;
    int res = tmp->data;
    delete tmp;
    return res;

}
int Stack::top1() {
    if (llist.head == nullptr) return -1;
    else return llist.head->data;
}
int Stack::size1() {
    int size = 0;
    Node* tmp = llist.head;
    while (tmp != nullptr) {
        size++;
        tmp = tmp->next;
    }
    return size;
}