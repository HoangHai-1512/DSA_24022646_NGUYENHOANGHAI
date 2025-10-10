#include <bits/stdc++.h>
using namespace std;

void heapify(int a[],int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;
    if (largest != i) {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

void heapSort(int a[],int n) {
    // xay dung maxheap( ko xet cac ptu o la)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a,n,i);
    }
    //heap sort
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0],a[i]);

        //giam so luong cua n xuong i
        heapify(a,i,0);
    }
}

// int main() {
//     int a[] = {38, 27, 43, 3, 9, 82, 10};
//     int n = 7;
//     heapSort(a,n);
//     for (int i = 0; i < n;i++) {
//         cout << a[i] << " ";
//     }
// }
