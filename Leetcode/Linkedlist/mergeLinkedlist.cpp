#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

int c = 0;

Node *takeInput1()
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
Node *takeInput2()
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
Node *MergeList(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *next1 = temp1->next;
    Node *next2 = temp2->next;
    while (next1 != NULL && temp2 != NULL)
    {
        if (temp2->data >= temp1->data && temp2->data <= next1->data)
        {
            temp1->next = temp2;
            next2 = temp2->next;
            temp2->next = next1;

            temp1 = temp2;
            temp2 = next2;
        }
        else
        {
            temp1 = temp1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                temp1->next = temp2;
                return head1;
            }
        }
    }
    return head1;
}
Node *MergeTwoSortedArray(Node *head1, Node *head2)
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
    else
    {
        if (head1->data <= head2->data)
        {
            temp = MergeList(head1, head2);
        }
        else
        {
            temp = MergeList(head2, head1);
        }
    }
    return temp;
}

int main()
{

    Node *head1 = takeInput1();
    Node *head2 = takeInput2();
    Node *head = MergeTwoSortedArray(head1, head2);
    print(head);
}