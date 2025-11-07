

#ifndef WEEK5_BINARYSEARCHTREE_H
#define WEEK5_BINARYSEARCHTREE_H
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int key) {
        this->key = key;
        this->left = nullptr;
        this->right = nullptr;
    }
};

struct BinarySearchTree {

    Node* root;
    BinarySearchTree() {
        root = nullptr;
    }

    Node* put(Node* node, int key) {
        if (node == nullptr) {
            Node* newNode = new Node(key);
            return newNode;
        }
        if (key < node->key) {
            node->left = put(node->left,key);
        }
        else if (key > node->key) {
            node->right = put(node->right,key);
        }
        return node; // ko cho phep trung data
    }

    Node* get(Node* node, int key) {
        if (node == nullptr) {
            return nullptr; // chua ton tai hoac cay rong
        }
        if (key == node->key) return node;
        else if (key < node->key) {
            return get(node->left,key);
        }
        else return get(node->right,key);
    }

    Node* deleteNode(Node* node, int key){
        if (node == nullptr) {

        }
        // Tim node can xoa
        if (key < node->key) {
            node->left = deleteNode(node->left,key);
        }
        else if (key > node->key) {
            node->right = deleteNode(node->right,key);
        }
        //Khi tim thay node
        else {
            //TH1: Node ko co con
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            }
            //TH2: Node co 1 con(trai/phai)
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            else if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }

            //TH3: co 2 nut con, TH nay se tim min cua ben phai
            else {
                Node* temp = findMin(node->right);
                node->key = temp->key; // dat luon key cua node = key cua temp
                node->right = deleteNode(node->right,temp->key); // sau khi dat xong thi bi trung key => xoa tiep key bi trung do, bat dau tu ben phai cua node
            }

            //Hoac co the tim max cua cay con ben trai de thay the
            // else {
            //     Node* temp = findMax(node->left);
            //     node->key = temp->key;
            //     node->left = deleteNode(node->left,temp->key);
            // }
        }
    }

    Node* findMin(Node* node) {
        while (node != nullptr && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* findMax(Node* node) {
        while (node != nullptr && node->right != nullptr) {
            node = node->right;
        }
        return node;
    }

    bool isBST(Node* node, int minVal, int maxVal) {
        if (node == nullptr) {
            return true;
        }
        if (node->key <= minVal || node->key >= maxVal) {
            return false;
        }
        return isBST(node->left, minVal, node->key) && isBST(node->right, node->key, maxVal);
    }


};



#endif //WEEK5_BINARYSEARCHTREE_H