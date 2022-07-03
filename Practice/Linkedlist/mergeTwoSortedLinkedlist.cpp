#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

Node *takeInput1()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
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
Node *takeInput2()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
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

int main()
{

    Node *head1 = takeInput1();
    Node *head2 = takeInput2();

    Node *temp1 = head1;
    Node *temp2 = head2;

    // FH = finalhead FT = finaltail

    Node *FH = NULL;
    Node *FT = NULL;

    while (temp1->data != NULL && temp2->data != NULL)
    {
        if (temp1->data < temp2->data)
        {
            FH = head1;
            FT = temp1;
            temp1 = temp1->next;
        }
        else
        {
            FT = temp2;
            temp2 = temp2->next;
        }
    }
}