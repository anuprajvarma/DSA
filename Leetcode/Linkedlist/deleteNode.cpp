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

void deleteNode(Node *head, int n)
{
    Node *temp = head;
    if (temp->data == n)
    {
        temp = temp->next;
    }
    else
    {
        int a = temp->next->data;
        if (a == n)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    print(temp);
}

int main()
{

    Node *head = takeInput();
    int n;
    cin >> n;
    deleteNode(head, n);
}