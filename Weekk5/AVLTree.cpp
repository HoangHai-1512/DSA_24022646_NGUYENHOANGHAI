#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int key) {
        this->key = key;
        this->left = NULL;
        this->right = NULL;
        this->height = 0; // node moi tao la la'
    }
};

struct AVLTree {
    Node* root;
    AVLTree() {
        root = NULL;
    }

    int height(Node* node) {
        if (node == nullptr) return 0;
        else return node->height;
    }

    int getBalance(Node* node) {
        if (node == nullptr) return 0;
        return height(node->left) - height(node->right); // Do lech giua ben trai va ben phai
    }

    int max(int a, int b) {
        if (a > b) return a;
        else return b;
    }

    //Xoay trai + phai ?
};