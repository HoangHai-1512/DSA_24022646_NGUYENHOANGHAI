#include <bits/stdc++.h>
using namespace std;

// Moi lan duyet mang, tim phan tu nho nhat trong doan, roi swap dan dan theo thu tu i
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_pos]) min_pos = j;
        }
        swap(a[i], a[min_pos]);
    }
} // O(n^2)

//Moi lan duyet mang, doi cho 2 phan tu ke nhau neu phan tu dau > phan tu sau
//Xong 1 vong lap i thi phan tu lon nhat se duoc dua ve cuoi mang
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
} // O(n^2)

// Moi lan duyet mang, ta sap xep dan dan, tu i -> 0;
// i di den dau thi sort den do
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && a[pos] > x)
        {
            a[pos+1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}// O(n^2)

int main()
{
    int a[10] = {6,3,12,23,4,234,34,45,65,92};
    selectionSort(a, 10);

    for (int x : a) cout << x << " ";
    cout << endl;

    int x[10] = {6,3,12,23,4,234,34,45,65,92};
    bubbleSort(x,10);
    for (int y : x) cout << y << " ";
    cout << endl;

    int c[10] = {6,3,12,23,4,234,34,45,65,92};
    bubbleSort(c,10);

    for (int d : c) cout << d << " ";
    cout << endl;
}



