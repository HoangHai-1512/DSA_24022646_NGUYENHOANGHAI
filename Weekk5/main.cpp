#include <bits/stdc++.h>
#include"BinarySearchTree.cpp"
using namespace std;


void inorder(Node* node) {
    if (node == nullptr) return;
    inorder(node->left);
    cout << node->key << " ";
    inorder(node->right);
}

int main() {
    BinarySearchTree bst;
    bst.root = bst.put(bst.root, 50);
    bst.root = bst.put(bst.root, 30);
    bst.root = bst.put(bst.root, 70);
    bst.root = bst.put(bst.root, 20);
    bst.root = bst.put(bst.root, 40);
    bst.root = bst.put(bst.root, 60);
    bst.root = bst.put(bst.root, 80);

    cout << "Cay BST (duyet theo inorder): ";
    inorder(bst.root);
    cout << endl;
}