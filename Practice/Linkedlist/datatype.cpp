#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Consracture 
    Node(int data){
        this->data = data;
        next = NULL;
    }
};