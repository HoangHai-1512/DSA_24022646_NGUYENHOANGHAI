#include <bits/stdc++.h>
using namespace std;

struct canh {
    int u,v;
    int w;
};

int n,m;
int parent[1000], sz[1000];
vector<canh> e;

void make_set() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = i;
    }
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return false;
    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}


void input() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x,y,w; cin >> x >> y >> w;
        canh c = canh(x,y,w);
        e.push_back(c);
    }
}

bool cmp(canh a, canh b) {
    return a.w < b.w;
}

void kruskal() {
    //Tao MST rong
    vector<canh> mst;
    int d = 0;
    //sort dsach canh
    sort(e.begin(), e.end(), cmp);

    //duyet cac canh trong vector
    for (int i = 0; i < m; i++) {
         if (mst.size() == n - 1) break; // neu so canh mst == n - 1 => stop
        canh c = e[i]; // chon canh min
        if (Union(c.u, c.v)) {
            mst.push_back(c);
            d += c.w;
        }
    }
    cout << d << endl;
    for (auto x : mst) cout << x.u << " " << x.v << " " << x.w << "\n";
}
int main() {
    input();
    make_set();
    kruskal();
}