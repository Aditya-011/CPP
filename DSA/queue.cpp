#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};
class QueueUsingLL
{
private:
    Node *front;
    Node *back;

public:
    QueueUsingLL(int n)
    {
        Node *tmp = new Node(n);
        front = tmp;
        back = tmp;
    }
    void enqueue(int n)
    {
        Node *newEl = new Node(n);
        back->next = newEl;
        back = newEl;
    }
    void dequeue()
    {
        if (front == NULL && back == NULL)
        {
            cout << "Cannot perform dequeue" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
    }
    bool isEmpty()
    {
        if (front == NULL && back == NULL)
        {

            return 1;
        }
        else
            return 0;
    }
    int peek()
    {
        return front->data;
    }
    void print()
    {
        Node* tmp = front;
        do
        {
           cout<<tmp->data<<" ";
           tmp= tmp->next;
        } while (tmp != back);
        cout<<endl;
    }
};
class QueueUsingArray
{
private:
    int *arr;
    int front = -1;
    int back = -1;

public:
    QueueUsingArray(int n)
    {
        arr = new int[n];
        front++;
        // back++;
    }
    void enqueue(int n)
    {
        back++;
        arr[back] = n;
    }
    void dequeue()
    {
        if (front == back)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == back)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == back)
        {

            return 1;
        }
        else
            return 0;
    }
    void print()
    {
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class QueueUsingStack
{
private:
stack<int>s1,s2;
public:
void enqueue(int n)
{
    if(!s1.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        
    }
    s1.push(n);
     while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }

}
void dequeue()
{
    if(s1.empty())
    {
        cout<<"Queue empty"<<endl;
        return;
    }
    s1.pop();
}
bool isEmpty()
{
    if(!s1.empty())
    {
        return 0;
    }
    else
    return 0;
}
int peek()
{
    if(s1.empty())
    {
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    return s1.top();

}
void print()
{
    while (!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    
}
};
int main()
{
    QueueUsingStack q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    //q.dequeue();
    q.print();
}