//
// Created by Hai on 10/2/2025.
//

#ifndef WEEK2_LINKEDLIST_H
#define WEEK2_LINKEDLIST_H

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;

    void Init();

    Node* makeNode(int data, Node* next);

    int get(int i);

    void addFirst(int value);

    void addLast(int value);

    void insert(int i, int value);

    void deleteFirst();

    void deleteLast();

    void deleteRan(int i);

    void duyet_xuoi();

    void duyet_nguoc();
};



#endif //WEEK2_LINKEDLIST_H