#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
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
void insertAtStart(Node **head, int data)
{
    Node *newnode = new Node(data);
    newnode->next = *head;
    *head = newnode;
}
void insertInMiddle(Node *ref, int data)
{
    if (ref == NULL)
    {
        cout << "Not Valid" << endl;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = ref->next;
    ref->next = newNode;
}

void insertAtLast(Node *head, int data)
{
    Node *newnode = new Node(data);
    Node *tmp = head;
    // newnode=head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    newnode->next = NULL;
}

void deleteAtPosition(Node *head, int pos)
{

    // If linked list is empty
    if (head == NULL)
        return;

    // Store head node
    Node *temp = head;

    // If head needs to be removed
    if (pos == 0)
    {

        // Change head
        head = temp->next;

        // Free old head
        free(temp);
        return;
    }

    // Find previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node *next = temp->next->next;

    // Unlink the node from linked list
    free(temp->next); // Free memory

    // Unlink the deleted node from list
    temp->next = next;
}

void deleteAtLast(Node *head)
{
    Node *tmp = head;

    if (tmp->next == NULL)
    {
        head = NULL;
        return;
    }
    while (tmp->next->next != NULL)
    {

        tmp = tmp->next;
    }
    Node *node = tmp->next;
    free(node);
    tmp->next = NULL;
}
void deleteList(Node **head_ref)
{
    Node *current = *head_ref;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    /* deref head_ref to affect the real head back
        in the caller. */
    *head_ref = NULL;
}
Node* reverseIterative(Node* &head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next;
    while (curr != NULL)
    {
        /* code */
        // prev= *curr;

        next = curr->next;
        curr->next = prev;
        prev = curr;

        curr = next;
        // next = next->next;
    }
    return prev;
}
Node* insertRecursive(Node* head,int data)
{
    if(head == NULL)
    {
        return new Node(data);
    }
    else 
    head->next = insertRecursive(head->next,data);
    return head;
}
Node* reverseRecursive (Node* &head)
{
    if(head==NULL || head == NULL)
    {
        return head;
    }
    Node* newHead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}
void traverseRecursive(Node* head)
{
    if(head == NULL)
    return;
    else 
    cout<<head->data<<" ";
    traverseRecursive(head->next);
}

int main()
{
    Node *head = new Node(1);
    Node *third = new Node(3);
    head->next = third;
    // insertAtStart(&head, 2);
    insertInMiddle(head, 2);
    insertAtLast(head, 4);
    // deleteAtPosition(head,1);
    // deleteAtLast(head);
    // deleteList(&head);
   Node* newhead =  reverseIterative(head);
    print(newhead);
}