#include <bits/stdc++.h>
using namespace std;


// Dinh nghia cac node trong cay nhi phan
struct Node {
    int data;
    Node* left;
    Node* right;

};

Node* makeNode(int data, Node* left, Node* right) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = left;
    newNode->right = right;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == nullptr) root = makeNode(value, nullptr, nullptr);

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}


//inorder: left -> root -> right
void inOrder(Node* root) {
    if (root == nullptr) return;
    inOrder(root->left); // chay xuong cuoi
    cout << root->data << " "; // danh dau la da duyet qua
    inOrder(root->right);
}

// preorder: root -> left  -> right
void preOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " "; // Duyet qua parent la in ra luon
    preOrder(root->left); // Chay xuong left cuoi
    preOrder(root->right);  // duyet xong left thi lai len parent roi duyet phai
}

// postorder: left -> right -> root
void postOrder(Node* root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;

    int a[] = {4,2,1,5,3,7,6,9,10,8};

    for (int x : a) root = insert(root, x);

    cout << "inorder: ";
    inOrder(root);
    cout << "preorder: ";
    preOrder(root);
    cout << "postorder: ";
    postOrder(root);
}
