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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << (*head).data << endl;
        head = (*head).next;
    }
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *temp = head;
    Node *next = NULL;

    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

int main()
{

    Node *head = takeInput();
    Node *head1 = reverse(head);
    print(head1);
}