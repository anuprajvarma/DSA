#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

Node *takeInput()
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

Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *current1 = head;
    Node *forward = NULL;

    while (current1 != NULL)
    {
        forward = current1->next;
        current1->next = prev;
        prev = current1;
        current1 = forward;
    }
    return prev;
}

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

    Node *head = takeInput();

    Node *head1 = reverseLinkedList(head);

    print(head1);
}