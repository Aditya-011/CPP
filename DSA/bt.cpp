#include <bits/stdc++.h>
using namespace std;
class Tree
{

public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};
void preOrder(Tree *&root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Tree *&root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(Tree *&root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void levelOrder(Tree* &root)
{
    if(root==NULL)
    return;
    queue<Tree*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Tree* tmp = q.front();
        q.pop();
        if(tmp!=NULL)
        {
            cout<<tmp->data<<" ";
            if(tmp->left)
            q.push(tmp->left);
             if(tmp->right)
            q.push(tmp->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
    
}
Tree * findPred (Tree* root)
{
    if(!root || !root->left)
    return NULL;

    Tree* tmp = root->left;
  while (!tmp->right)
  {
   tmp = tmp->right;
  }
  return tmp;
  
}
void morrisTraversal(Tree* root)
{
    Tree* curr = root;
    while (!root)
    {
        if(!root->left)
        {
            cout<<root->data<<" ";
            curr = curr->right;
        }
        else
        {
            Tree* pred = findPred(curr);
            if(!pred->right)        // to link to root
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->right =NULL;          // to remove links from root
                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }

    }
    
}
int main()
{
    Tree *root = new Tree(0);
    Tree *one = new Tree(1);
    Tree *two = new Tree(2);
    root->left = one;
    root->right = two;
    // preOrder(root);
    // inOrder(root);
   // postOrder(root);
   levelOrder(root);
}