#include <bits/stdc++.h>
using namespace std;

int canh, dinh;
int visited[1000];
vector<int> ke[1000];

void DFS(int u) {
    cout << u << " ";
    visited[u] = 1;
    for (int v : ke[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int x : ke[v]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = 1;
            }
        }
    }
}

int main() {

    cin >> dinh >> canh;
    // matranke
    // for (int i = 1; i <= canh; i++) {
    //     int x,y;
    //     cin >> x >> y;
    //     a[x][y] =  a[y][x] = 1; // do thi vo huong
    //     //a[x][y] = 1: do thi co huong
    // }
    //
    // for (int i = 1; i <= canh; i++) {
    //     for (int j = 1; j <= dinh; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //danh sach ke
    for (int i = 0; i < canh; i++) {
        int x,y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for (int i = 1; i <= canh; i++) {
        cout << i << ": ";
        for (int j : ke[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}