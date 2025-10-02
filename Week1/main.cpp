#include <bits/stdc++.h>
#include "List.cpp"
#include "LinkedList.cpp"
#include "Double_Linked_List.cpp"
using namespace std;

int main()
{
    cout << "Test List: " << endl;
    List a;
    a.init();
    a.addFirst(6);
    a.addLast(7);
    a.addLast(2);
    a.addLast(88);
    a.insert(1,2);
    a.insert(5,3);
    a.insert(12,3);
    a.deleteFirst();
    a.deleteLast();
    a.deleteRan(2);
    a.duyet_xuoi();
    a.duyet_nguoc();

    cout << "Test LinkedList: " << endl;
    LinkedList list;
    list.Init();
    list.addFirst(2);
    list.addFirst(3);
    list.addFirst(4);
    list.addLast(6);
    list.addLast(7);
    list.addLast(8);
    list.insert(2,1);
    list.duyet_xuoi();

    cout << "Test D_LinkedList: " << endl;
    D_LinkedList dList;
    dList.init();
    dList.addFirst(5);
    dList.addFirst(6);
    dList.addFirst(7);
    dList.addLast(8);
    dList.addLast(9);
    dList.insert(4,2);
    dList.deleteFirst();
    dList.deleteLast();
    dList.duyet_xuoi();
    dList.duyet_nguoc();

}

