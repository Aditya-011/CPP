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
    tmp->next = newEl;
    newEl->next=NULL;
    newEl->prev=tmp;
    
}
void insertAtStart(Node* &head,int val)
{
    Node* newEl= new Node(val);
    newEl->next=head;
    head->prev= newEl;
    head= newEl;
}
void deleteAtStart(Node* & head)
{
    Node* tmp =head;
    tmp->next->prev=NULL;
    head = tmp->next;
    delete tmp;

}
void deleteEl(Node* & head, int val)
{
    Node* tmp=head;
    while(tmp->data!=val && tmp->next != NULL)
    tmp=tmp->next;
    tmp->prev->next= tmp->next;
    if(tmp->next!=NULL)
    tmp->next->prev=tmp->prev;
    delete tmp;

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
insertAtStart(head,0);
//deleteAtStart(head);
deleteEl(head,2);
print(head);
}