//
// Created by Hai on 10/2/2025.
//

#ifndef WEEK2_LIST_H
#define WEEK2_LIST_H
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;

struct List{
    int arr[MAX];
    int size;

    void init();

    // Truy cap
    int get(int i); // O(1)

    //them dau
    void addFirst(int number); //O(N)

    //them cuoi
    void addLast(int number);

    //chen vao vi tri index
    void insert(int number, int index);

    // xoa dau
    void deleteFirst();

    // xoa cuoi
    void deleteLast();

    // xoa vi tri bat ky
    void deleteRan(int i);

    void duyet_xuoi();

    void duyet_nguoc();
};


#endif //WEEK2_LIST_H