#include <bits/stdc++.h>
using namespace std;
class StackUsingArray
{
private:
    int *arr;
    int top;
    int size = 0;

public:
    StackUsingArray(int n)
    {
        arr = new int[n];
        top = -1;
        size = n;
    }
    void push(int n)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = n;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack empty" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack empty" << endl;
            return 0;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
};
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
class StackUsingLL
{
private:
    Node *top;
    int size = 0;
    int count = 0;

public:
    StackUsingLL(int n)
    {
        size = n;
    }
    void push(int n)
    {
        if (count == size)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        Node *tmp = new Node(n);
        tmp->next = top;
        top = tmp;
        count++;
    }
    void pop()
    {
        if (count == 1 || top->next == NULL)
        {
            cout << "Stack empty" << endl;
            return;
        }
        top = top->next;
    }
    int Top()
    {
        if (count == 1 || top->next == NULL)
        {
            cout << "Stack empty" << endl;
            return 0;
        }
        return top->data;
    }
    bool isEmpty()
    {
        if (count == 1 || top->next == NULL)
        {
            return 1;
        }
        else
            return false;
    }
    void print()
    {

        if (count == 1 || top->next == NULL)
        {
            cout << "Stack empty" << endl;
            return;
        }
        while (top->next != NULL)
        {
            cout << top->data << " ";
            top = top->next;
        }
        cout << endl;
    }
};
void stackUsingArray()
{
    StackUsingArray s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    // cout<<s.Top()<<endl;
    s.print();
}
void reverseSentence()
{
    string q = "How are you?";
    stack<string> st;
    string tmp;

    for (int i = 0; i < q.length(); i++)
    {
        if (q[i] != ' ')
        {
            tmp.push_back(q[i]);
            // cout<<q[i]<<endl;
        }
        else
        {
            // cout<<tmp<<endl;
            st.push(tmp);
            tmp.clear();
        }
        if (i == q.length() - 1)
        {
            st.push(tmp);
            tmp.clear();
        }
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
void insertAtBottom(stack<int> &s, int item)
{
    // base case: if the stack is empty, insert the given item at the bottom
    if (s.empty())
    {
        s.push(item);
        return;
    }

    // Pop all items from the stack and hold them in the call stack
    int top = s.top();
    s.pop();
    insertAtBottom(s, item);

    // After the recursion unfolds, push each item in the call stack
    // at the top of the stack
    s.push(top);
}

// Recursive function to reverse a given stack
void reverseStack(stack<int> &s)
{
    // base case: stack is empty
    if (s.empty())
    {
        return;
    }

    // Pop all items from the stack and hold them in the call stack
    int item = s.top();
    s.pop();
    reverseStack(s);

    // After the recursion unfolds, insert each item in the call stack
    // at the bottom of the stack
    insertAtBottom(s, item);
}
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}
void stackUsingLL()
{
    StackUsingLL s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.isEmpty() << endl;
    // cout<<s.Top()<<endl;
    s.print();
}
void prefixEvaluation()
{
    string q = "-+7*45+20";
    stack<int> st;
    for (int i = q.size() - 1; i >= 0; i--)
    {
        if (isdigit(q[i]))
        {
            st.push(q[i] - '0');
            // cout<<st.top();
        }
        else
        {
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            st.pop();
            switch (q[i])
            {
            case '+':
                st.push(n1 + n2);
                break;
            case '-':
                st.push(n1 - n2);
                break;
            case '*':
                st.push(n1 * n2);
                break;
            case '/':
                st.push(n1 / n2);
                break;
            case '^':
                st.push(pow(n1, n2));
                break;
            default:
                break;
            }
        }
    }
    cout << st.top() << endl;
}
void postfixEvaluation()
{
    string q = "46+2/";
    stack<int> st;
    for (int i = 0; i < q.size(); i++)
    {
        if (isdigit(q[i]))
        {
            st.push(q[i] - '0');
            // cout<<st.top();
        }
        else
        {
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            st.pop();
            switch (q[i])
            {
            case '+':
                st.push(n1 + n2);
                break;
            case '-':
                st.push(n1 - n2);
                break;
            case '*':
                st.push(n1 * n2);
                break;
            case '/':
                st.push(n2 / n1);
                break;
            case '^':
                st.push(pow(n1, n2));
                break;
            default:
                break;
            }
        }
    }
    cout << st.top() << endl;
}
int preced(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;
}
void infixToPostfix()
{
    string infix = "(a-b/c)*(a/k-l)";
    stack<char> stk;
    stk.push('#');       // add some extra character to avoid underflow
    string postfix = ""; // initially the postfix string is empty
    string::iterator it;

    for (it = infix.begin(); it != infix.end(); it++)
    {
        if (isalnum(char(*it)))
            postfix += *it; // add to postfix when character is letter or number
        else if (*it == '(')
            stk.push('(');
        else if (*it == '^')
            stk.push('^');
        else if (*it == ')')
        {
            while (stk.top() != '#' && stk.top() != '(')
            {
                postfix += stk.top(); // store and pop until ( has found
                stk.pop();
            }
            stk.pop(); // remove the '(' from stack
        }
        else
        {
            if (preced(*it) > preced(stk.top()))
                stk.push(*it); // push if precedence is high
            else
            {
                while (stk.top() != '#' && preced(*it) <= preced(stk.top()))
                {
                    postfix += stk.top(); // store and pop until higher precedence is found
                    stk.pop();
                }
                stk.push(*it);
            }
        }
    }

    while (stk.top() != '#')
    {
        postfix += stk.top(); // store and pop until stack is not empty.
        stk.pop();
    }

    cout << postfix;
}
void balanceParenthesies()
{
    string q = "{{(]}}";
    stack<char> st;
    for (int i = 0; i < q.size(); i++)
    {
        if (q[i] == '(' || q[i] == '{' || q[i] == '[')
        {
            st.push(q[i]);
        }
        else if (q[i] == ')' && !st.empty() &&  st.top() == '(')
        {
            st.pop();
        }
          else if (q[i] == '}' && !st.empty() &&  st.top() == '{')
        {
            st.pop();
        }
          else if (q[i] == ']' && !st.empty() &&  st.top() == '[')
        {
            st.pop();
        }
        
    }
    if(!st.empty())
    cout<<"Invalid String"<<endl;
    else
    cout<<"Valid String"<<endl;
}
int main()
{
    // stackUsingArray();
    // stackUsingLL();
    // reverseSentence();
    /*stack<int>st;
    for (int i = 0; i < 5; i++)
    {
        st.push(i);
    }
    reverseStack(st);
    print(st);*/
    ;
    // postfixEvaluation();
    balanceParenthesies();
}