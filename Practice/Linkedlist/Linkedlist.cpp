#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

void print(Node *head)
{
    while (head != NULL)
    {
        cout << (*head).data << endl;
        head = (*head).next;
    }
}

int main()
{
    /*
    // statically
    Node n1(1);
    Node *head = &n1;

    Node n2(2);

    n1.next = &n2;

    cout << n1.data << " " << n2.data;
    */

    // Dynamicaly
    Node *n3 = new Node(1);
    Node *head = n3;

    Node *n4 = new Node(2);
    Node *n5 = new Node(3);

    //(*n3).next = n4;
    // or
    n3->next = n4;
    //(*n4).next = n5;
    // or
    n4->next = n5;

    print(head);
}