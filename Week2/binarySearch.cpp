#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int x, int a[], int n)
{
    int l = 0, r = n - 1;
    while (r >= l)
    {
       int mid = (l + r) / 2;
        if (a[mid] == x) return true;
        else if (a[mid] > x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main()
{
    int a[10] = {4,3,7,32,1,6,23,14,76,54};
    sort(a, a + 10);
    cout << binarySearch(7,a,10);
}
