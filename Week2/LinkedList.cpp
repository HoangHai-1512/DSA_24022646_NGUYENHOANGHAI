//
// Created by Hai on 10/2/2025.
//

#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;



    void LinkedList::Init() {
        head = nullptr;
    }

    Node* LinkedList::makeNode(int data, Node* next) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = next;
        return newNode;
    }

    int LinkedList::get(int i) {
        Node* tmp = head;
        int index = 0;
        while (tmp != nullptr && index < i) {
            tmp = tmp->next;
            index++;
        }
        if (head == nullptr) {
            return -1;
        }
        return tmp->data;
    } // O(N)

    void LinkedList::addFirst(int value) {
        Node* newNode = makeNode(value, head);
        head = newNode;
    } // O(1)

    void LinkedList::addLast(int value) {
        Node* newNode = makeNode(value, nullptr);
        if (head == nullptr) {
            head = newNode;
            return; // giong add first
        }
        Node* tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    } // O(N)

    void LinkedList::insert(int i, int value) {
        if (i == 0) {
            addFirst(value); // => tro thanh bai toan them dau
            return;
        }
        Node* newNode = makeNode(value, nullptr);
        Node* tmp = head;
        int index = 0;
        while (tmp != nullptr && index < i - 1) {
            tmp = tmp->next;
            index++;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    } // O(N)

    void LinkedList::deleteFirst() {
        if (head == nullptr) {
            return;
        }
        Node* tmp = head;
        head  =  head->next;
        delete tmp;
    } // O(1)

    void LinkedList::deleteLast() {
        if (head == nullptr) {
            return;
        }
        if (head->next == nullptr) { // truong hop chi co 1 ptu
            delete head;
            head = nullptr;
            return;
        }
        Node* tmp = head;
        while (tmp->next->next != nullptr) {
            tmp = tmp->next;
        }
        delete tmp->next;
        tmp->next = nullptr;
    } // O(N)

    void LinkedList::deleteRan(int i) {
        if (head == nullptr) {
            return;
        }
        if (i == 0) {
            deleteFirst();
            return;
        }
        int index = 0;
        Node* tmp = head;
        while ( tmp != nullptr && index < i - 1 ) {
            tmp = tmp->next;
            index++;
        }
        Node* xoa = tmp->next;
        tmp->next = xoa->next;
        delete xoa;
    } // O(N)

    void LinkedList::duyet_xuoi() {
        Node* tmp = head;
        while (tmp != nullptr) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    } // O(N)

    void LinkedList::duyet_nguoc() {
        vector <int> a;
        Node* tmp = head;
        while (tmp != nullptr) {
            a.push_back(tmp->data);
            tmp = tmp->next;
        }
        int n = a.size();
        for (int i = n - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    } // O(N)

