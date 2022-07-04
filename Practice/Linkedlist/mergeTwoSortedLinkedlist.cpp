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
Node *solve(Node *first, Node *second)
{
    Node *curr1 = first;
    Node *curr2 = second;
    Node *next1 = curr1->next;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr1->data <= curr2->data && next1->data >= curr2->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = curr1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *mergeTwoSortedArray(Node *head1, Node *head2)
{
    Node *temp = head1;
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        temp = solve(head1, head2);
    }
    else
    {
        temp = solve(head2, head1);
    }
    return temp;
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

    Node *head1 = takeInput1();
    Node *head2 = takeInput2();

    Node *head = mergeTwoSortedArray(head1, head2);
    print(head);
}