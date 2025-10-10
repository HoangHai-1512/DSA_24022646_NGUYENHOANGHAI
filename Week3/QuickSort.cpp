#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[r]; // phan tu cuoi cung
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    // dua pivot ve mid
    i++;
    swap(a[i], a[r]);
    return i; // vi tri cua pivot sau khi phan hoach
}

void quicksort(int a[], int l, int r) {
    if (l >= r) return;
    int p = partition(a,l,r);
    quicksort(a,l,p-1);
    quicksort(a,p+1,r);
}


// int main() {
//     int a[10] =  {1,4,2,545,65,234,45,32,43,55};
//     quicksort(a,0,9);
//     for (int x : a) cout << x << " ";
// }