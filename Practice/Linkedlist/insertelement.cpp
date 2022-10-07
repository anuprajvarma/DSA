#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

Node* takeinput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data!=-1)
    {
        Node *newnode = new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next = newnode;
            tail=tail->next;
            //OR
            //tail=newnode
        }
        cin>>data;
    }
    
    return head;
}

Node *insertelement(Node *newnode1,Node *head){
    Node *temp = head;
      while (temp->next!=NULL)
      {
         temp=temp->next;
      }
      temp->next=newnode1;
      return head;
}

void print(Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
   Node *head = takeinput();
   print(head);
   int a;
   cin>>a;
   Node *newnode1 = new Node(a);
   Node *head2 = insertelement(newnode1,head);
   print(head2);
}