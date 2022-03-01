#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtEnd(Node* &head,int val)
{
    Node* newEl = new Node(val);
    Node* tmp=head;
    while (tmp->next!=NULL)
    {
        tmp= tmp->next;
    }
    newEl->next=NULL;
    newEl->prev=tmp;
    
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
Node* head= new Node(1);
insertAtEnd(head,2);
print(head);
}