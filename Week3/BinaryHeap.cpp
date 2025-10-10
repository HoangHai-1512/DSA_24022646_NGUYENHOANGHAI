//
// Created by Hai on 10/10/2025.
//
#include "BinaryHeap.h"

void BinaryHeap::insert(int data) {
    list.addLast(data);
    swim(list.size - 1);
}
int BinaryHeap::delMax() {
    if (isEmpty()) {
        cout << "Rong";
        return -1;
    }

    int maxVal = list.arr[0];
    list.arr[0] = list.arr[list.size - 1];
    list.deleteLast();
    sink(0);
    return maxVal;

}
bool BinaryHeap::isEmpty() {
    return list.size == 0;
}
int BinaryHeap::max() {
    if (isEmpty()) {
        cout << "Rong";
        return -1;
    }
    return list.arr[0];
}
int BinaryHeap::size() {
    return list.size;
}

// boi len:doi cho voi cha lien tuc neu  thoa man
void BinaryHeap::swim(int k) {
    while (k > 0) {
        int parent = (k - 1) / 2; // tim dinh cha cua dinh k
        if (list.arr[parent] < list.arr[k]) {
            swap(list.arr[k], list.arr[parent]);

        }
        k = parent;
    }
}
// chim xuong( doi cho vs tk con lien tuc neu thoa  man)
void BinaryHeap::sink(int k) {
    int n = list.size;
    while ((2*k + 1) < n) {
        int j = 2*k + 1; // con trai
        if (j + 1 < n && list.arr[j+1] > list.arr[j]) j++;
        if (list.arr[k] <list.arr[j]) {
            swap(list.arr[k], list.arr[j]);
        }
        k = j;
    }
}
