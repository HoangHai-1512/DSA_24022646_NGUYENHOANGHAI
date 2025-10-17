#include <bits/stdc++.h>
using namespace std;

struct Node {
    string key;
    int value;
    Node* next;
};


struct LinkedList {
    Node* head;

    void Init() {
        head = nullptr;
    }

    Node* makeNode(string key,int value, Node* next) {
        Node* newNode = new Node;
        newNode->key = key;
        newNode->value = value;
        newNode->next = next;
        return newNode;
    }

    void insert(string key, int value) {
        Node* tmp = head;
        while (tmp != nullptr) {
            if (tmp->key == key) {
                tmp->value = value; // neu ton tai key r  thi chi chinh value
                return;
            }
            tmp = tmp->next;
        }

        //Neu key chua ton tai thi them vao dau
        Node* newNode = makeNode(key,value,nullptr);
        newNode->next = head;
        head = newNode;
    }

    int get(string key) {
        Node* tmp = head;
        while (tmp != nullptr) {
            if (tmp->key == key) {
                return tmp->value;
            }
            tmp = tmp->next;
        }
        return -1; // neu ko co key thoa man
    }

    void remove(string key) {
        if (head == nullptr) return; // neu table rong

        //Neu key o dau
        if (head->key == key) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return;
        }

        Node* tmp = head;
        while (tmp->next != nullptr) {
            if (tmp->next->key == key) {
                tmp->next = tmp->next->next;
                return;
            }
        }
    }

    string getMin() {
        if (head == nullptr) return "ko co";
        Node* tmp = head;
        string ss = tmp->key;
        tmp = tmp->next;
        while (tmp != nullptr) {
            ss = min(ss, tmp->key);
            tmp = tmp->next;
        }
        return ss;
    }

    string getMax() {
        if (head == nullptr) return "ko co";
        Node* tmp = head;
        string ss = tmp->key;
        tmp = tmp->next;
        while (tmp != nullptr) {
            ss = max(ss, tmp->key);
            tmp = tmp->next;
        }
        return ss;
    }

    void print() {
        if (head == nullptr) return;
        Node* tmp = head;

        while (tmp != nullptr) {
            cout << tmp->key << " " << tmp->value << " " << endl;
            tmp = tmp->next;
        }
    }
};
