
#include <bits/stdc++.h>
using namespace std;
#ifndef LIST_LINKEDLIST_SYMBOLTABLE_H
#define LIST_LINKEDLIST_SYMBOLTABLE_H


struct SymbolTable {
private:

    struct input {
        string key;
        int value;
    };

    vector <input> arr;


public:

    int rank(string key) {
        int l = 0, r = arr.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m].key <key) l = m + 1;
            else r = m - 1;
        }
        return l; // tat ca nhung ptu nho hon key phia trc
    }

    void put(string key, int value) {
        int i = rank(key);
        if (i < arr.size() && arr[i].key == key) {
            arr[i].value = value; // neu da co key thi chi upd value
            return;
        }
        arr.insert(arr.begin() + i, {key, value});// chèn đúng vị trí l
    }



    string min() {
        if (arr.size() == 0) return "bang rong";
        return arr[0].key;
    }

    string max() {
        if (arr.size() == 0) return "bang rong";
        return arr[arr.size()-1].key;
    }

    string floor(string key) {
        int i = rank(key);
        if (i < arr.size() && arr[i].key == key) {
            return arr[i].key; // neu co key
        }
        if (i == 0) return "ko co ptu nao nho hon";
        return arr[i-1].key;
    }

    string ceiling(string key) {
        int i = rank(key);
        if (i < arr.size() && arr[i].key == key) {
            return arr[i].key;
        }
        if (i == arr.size()) return "ko co ptu nao lon hon";
    }


    string select(int k) {
        return arr[k].key;
    }

    void deleteMin() {
        if (arr.size() == 0) return;
        arr.erase(arr.begin());
    }

    void deleteMax() {
        if (arr.size() == 0) return;
        arr.pop_back();
    }

    void print() {
        for (auto e : arr)
            cout << e.key << " : " << e.value << endl;
    }

};

}


#endif //LIST_LINKEDLIST_SYMBOLTABLE_H