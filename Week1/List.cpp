#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;

struct List{
    int arr[MAX];
    int size;

    void init() {
        size = 0;
    }

    // Truy cap
    int get(int i) {
        if (i < 0 || i >= size) return -1;
        return arr[i];
    } // O(1)

    //them dau
    void addFirst(int number){
        if (size == MAX) return;
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = number;
        size++;
    } //O(N)

    //them cuoi
    void addLast(int number) {
        if (size == MAX) return;
        arr[size] = number;
        size++;
    } // O(1)

    //chen vao vi tri index
    void insert(int number, int index) {
        if (size == MAX) return;
        if (index < 0 || index > size) return;
        for (int i = size; i > index; i--) {
            arr[i] = arr[i-1];
        }
        arr[index] = number;
        size++;
    } //O(n)

    // xoa dau
    void deleteFirst() {
        if (size == 0) return;
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i+1];
        }
        size--;
    } //O(N)

    // xoa cuoi
    void deleteLast() {
        if (size == 0) return;
        size--;
    } //O(1)

    // xoa vi tri bat ky
    void deleteRan(int i) {
        if (size == 0) return;
        if (i < 0 || i >= size) return;
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j+1];
        }
        size--;
    } //O(N)

    void duyet_xuoi() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } // 0(N)

    void duyet_nguoc() {
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } // O(N)
};


