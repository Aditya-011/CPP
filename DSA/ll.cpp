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
Node *reverseIterative(Node *&head)
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
Node *insertRecursive(Node *head, int data)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    else
        head->next = insertRecursive(head->next, data);
    return head;
}
Node *reverseRecursive(Node *&head)
{
    if (head == NULL || head == NULL)
    {
        return head;
    }
    Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
void traverseRecursive(Node *head)
{
    if (head == NULL)
        return;
    else
        cout << head->data << " ";
    traverseRecursive(head->next);
}

Node *reverseKNodes(Node *head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        head->next = reverseKNodes(next, k);

    /* prev is new head of the input list */
    return prev;
}
bool detectCycle(Node *&head)
{
    // Flloyd Algo (hare & tortoise algo ) tortoise moves one step ad hare moves two steps if there is a cyce both will meet at a point
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return 1;
        }
    }
    return 0;
}
void removeCycle(Node *&head)
{
    Node *fast = head;
    Node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
Node *appendKNodes(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    Node *tmp = head;
    int len = 0;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        len++;
    }
    int target = len - k;
    Node *newTail = head;
    for (int i = 0; i < target; i++)
    {
        newTail = newTail->next;
    }
    Node *newHead = newTail->next;
    newTail->next = NULL;
    tmp->next = head;
    head = newHead;
    return head;
}
void merge2SortedLL()
{
    Node *one1 = new Node(1);
    Node *two1 = new Node(4);
    Node *three1 = new Node(6);
    Node *one2 = new Node(2);
    Node *two2 = new Node(3);
    Node *three2 = new Node(5);
    one1->next = two1;
    two1->next = three1;
    three1->next = NULL;
    one2->next = two2;
    two2->next = three2;
    three2->next = NULL;
    int length = 6;
    Node *ll1 = one1;
    Node *ll2 = one2;
    Node *newLL = new Node(-1);
    Node *tmp = newLL;
    while (ll1 != NULL && ll2 != NULL)
    {
        if (ll1->data < ll2->data)
        {
            tmp->next = ll1;
            ll1 = ll1->next;
        }
        else
        {
            tmp->next = ll2;
            ll2 = ll2->next;
        }
        tmp = tmp->next;
    }
    while (ll1 != NULL)
    {
        tmp->next = ll1;
        tmp = tmp->next;
        ll1 = ll1->next;
    }
    while (ll2 != NULL)
    {
        tmp->next = ll2;
        tmp = tmp->next;
        ll2 = ll2->next;
    }
    print(newLL->next);
}
Node* putEvenElFirst(Node* &head)
{
   Node* odd = head;
Node* even = head->next;
Node* evenStart = even;
while (odd->next != NULL && even->next != NULL) {
odd->next = even->next;
odd = odd->next;
even->next = odd->next;
even = even->next;
}
odd->next = evenStart;
if (odd->next != NULL) {
even->next = NULL;
}
}
int main()
{
    Node *head = new Node(1);
    Node *third = new Node(3);
    head->next = third;
    // insertAtStart(&head, 2);
    insertInMiddle(head, 2);

    insertAtLast(head, 4);
    insertAtLast(head, 5);
    insertAtLast(head, 6);
    insertAtLast(head, 7);

    // deleteAtPosition(head,1);
    // deleteAtLast(head);
    // deleteList(&head);
    // Node* newhead =  reverseIterative(head);
    // Node* newHead = appendKNodes(head,3);
    // print(head);
    // cout<<detectCycle(head);
    //merge2SortedLL();
    Node* newHead = putOddElFirst(head);
    print(newHead);
}