#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

int c = 0;

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        c++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
Node *DeleteNode(Node *head, int i)
{
    Node *temp = head;
    if (i == 0)
    {
        head = temp->next;
        return head;
    }
    int c = 0;
    while (temp != NULL && c < i - 1)
    {
        temp = temp->next;
        c++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next->next;
        temp->next = a;
    }

    return head;
}
/*
Node *InsetNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    int c = 0;
    while (temp != NULL && c < i - 1)
    {
        temp = temp->next;
        c++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}
*/

// Print by index
void print(Node *head, int i)
{
    Node *temp = head;
    int t = 0;
    while (t < i)
    {
        temp = temp->next;
        t++;
    }
    cout << temp->data << endl;
}

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << (*head).data << endl;
//         head = (*head).next;
//     }
// }

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
    /*Node *n3 = new Node(1);
    Node *head = n3;

    Node *n4 = new Node(2);
    Node *n5 = new Node(3);

    //(*n3).next = n4;
    // or
    n3->next = n4;
    //(*n4).next = n5;
    // or
    n4->next = n5;*/
    Node *head = takeInput();
    int i = (c - 1) / 2;
    print(head, i);
    //  print(head);
    //  int i;
    //  cin >> i;
    //  head = DeleteNode(head, i);
    //  print(head);
    /*
    int i, data;
    cin >> i >> data;
    head = InsetNode(head, i, data);
    cout << "insert element" << endl;
    print(head);
    */
}