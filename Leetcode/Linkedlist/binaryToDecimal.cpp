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
int binaryToDecimal(Node *head)
{
    Node *head1 = reverseLinkedList(head);
    Node *temp = head1;
    int base = 1;
    int total = 0;
    while (temp != NULL)
    {
        total = (total + (temp->data * base));
        base = base * 2;
        temp = temp->next;
    }
    return total;
}

int main()
{

    Node *head = takeInput();
    int result = binaryToDecimal(head);
    cout << result << endl;
}