#include <bits/stdc++.h>
using namespace std;

struct Node2
{
    int data;
    Node2* next;
    Node2* prev;
};

struct D_LinkedList
{
    Node2* head;
    Node2* tail;

    void init()
    {
        head = nullptr;
        tail = nullptr;
    }

    Node2* makeNode(int value, Node2* next, Node2* prev)
    {
        Node2* newNode = new Node2;
        newNode->data = value;
        newNode->next = next;
        newNode->prev = prev;
        return newNode;
    }

    //Truy cap
    int get(int i)
    {
        Node2* tmp = head;
        int index = 0;
        while (tmp != nullptr || index < i)
        {
            tmp = tmp->next;
            index++;
        }
        if (head == nullptr)
        {
            return -1;
        }
        return tmp->data;
    } //O(n)

    //them_dau
    void addFirst(int value)
    {
        Node2* newNode = makeNode(value, head, nullptr);
        if (head != nullptr) head->prev = newNode;
        head = newNode;
        if (tail == nullptr) tail = newNode;
    } //O(1)


    void addLast(int value)
    {
        Node2* newNode = makeNode(value, nullptr, tail);
        if (tail != nullptr)
        {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == nullptr) head = newNode;
    } //O(1)


    void insert(int value, int i)
    {
        if (i == 0)
        {
            addFirst(value);
            return;
        }
        Node2* tmp = head;
        int index = 0;
        if (tmp != nullptr && index < i - 1)
        {
            tmp = tmp->next;
            index++;
        }
        Node2* newNode = makeNode(value,nullptr,nullptr);
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
    }//O(N)

    void deleteFirst()
    {
        if (head == nullptr) return;
        Node2* tmp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
            delete tmp;
            return;
        }
        head->prev = nullptr;
        delete tmp;
    } //O(1)

    void deleteLast()
    {
        if (tail == nullptr) return;
        Node2* tmp = tail;
        tail = tail->prev;
        if (tail == nullptr)
        {
            head = nullptr;
            delete tmp;
            return;
        }
        tail->next = nullptr;
        delete tmp;
    }//O(1)

    void deleteRan(int i)
    {
        if (i == 0)
        {
            deleteFirst();
            return;
        }
        Node2* tmp = head;
        int index = 0;
        while (tmp != nullptr && index < i)
        {
            tmp = tmp->next;
            index++;
        }
        Node2* xoa = tmp->next;
        tmp->next = tmp->next->next;
        tmp->next->prev = tmp;
        delete xoa;
    } //O(N)

    void duyet_xuoi()
    {
        Node2* tmp = head;
        while (tmp != nullptr)
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }//O(N)

    void duyet_nguoc()
    {
        Node2* tmp = tail;
        while (tmp != nullptr)
        {
            cout << tmp->data << " ";
            tmp = tmp->prev;
        }
        cout << endl;
    }//O(N)
};
