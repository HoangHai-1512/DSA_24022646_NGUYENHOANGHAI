#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;

    void Init() {
        head = nullptr;
    }

    Node* makeNode(int data, Node* next) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = next;
        return newNode;
    }

    int get(int i) {
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

    void addFirst(int value) {
        Node* newNode = makeNode(value, head);
        head = newNode;
    } // O(1)

    void addLast(int value) {
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

    void insert(int i, int value) {
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

    void deleteFirst() {
        if (head == nullptr) {
            return;
        }
        Node* tmp = head;
        head  =  head->next;
        delete tmp;
    } // O(1)

    void deleteLast() {
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

    void deleteRan(int i) {
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

    void duyet_xuoi() {
        Node* tmp = head;
        while (tmp != nullptr) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    } // O(N)

    void duyet_nguoc() {
        vector <int> a;
        Node* tmp = head;
        while (tmp != nullptr) {
            a.push_back(tmp->data);
            tmp = tmp->next;
        }
        for (int x : a) cout << x << " ";
        cout << endl;
    } // O(N)
};

