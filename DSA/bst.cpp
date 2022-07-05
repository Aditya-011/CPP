#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int n)
    {
        data=n;
        left=NULL;
        right=NULL;
    }
};
Tree* insertNode(Tree* root,int val)
{
Tree* tmp;
if(root==NULL)
{
 return new Tree(val) ;
}
if(val < root->data)
{
    root->left = insertNode(root->left,val);
}
else
{
    root->right = insertNode(root->right,val);
}
return root;
}
Tree* sortedToBST(int arr[],int l,int r)
{
    if(l>r)
    return NULL;
    int mid = (l+r)/2;
    Tree* newNode = new Tree(arr[mid]);
    newNode->left= sortedToBST(arr,l,mid-1);
    newNode->right= sortedToBST(arr,mid+1,r);
    return newNode;
}
Tree* searchKey(Tree* root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(key == root->data)
    return root;
    if(root-> data > key)
    {
        return searchKey(root->left,key);
    }
   
        return searchKey(root->right,key);

}
Tree* deleteLeafNode(Tree* root,int key)
{
    Tree* tmp = searchKey(root,key);
    delete(tmp);
}
Tree* minVal(Tree* root)
{
    if(!root->left)
    return root;

    return minVal(root->left);
}
Tree*  deleteNode(Tree* &root,int key)
{
   if(!root)
   return NULL;
   if(root->data == key)
   {
    // 0 child
    if(!root->left && !root->right)
    {
        delete(root);
        return NULL;
    }
    // 1 child
    //left child
     if(root->left && !root->right)
     {
        Tree* temp = root->left;
        delete(root);
        return temp;
     }

     // right child
      if(root->right && !root->left)
     {
        Tree* temp = root->right;
        delete(root);
        return temp;
     }
     // 2 child
     if(root->left && root->right)
     {
        int mini = minVal(root->right)->data;
        root->data = mini;
        root->right = deleteNode(root->right,mini);
        return root;
     }
   }
  else if(root->data > key)
  {
    root->left = deleteNode(root->left,key);
    return root;
  }
  else if(root->data < key)
  {
    root->right = deleteNode(root->right,key);
    return root;
  }
}
void inOrder(Tree *&root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
/*Tree* root = new Tree(5);
insertNode(root,4);
insertNode(root,3);
insertNode(root,6);*/
int arr[] = {10,20,30,40,50};
Tree* root = sortedToBST(arr,0,4);
inOrder(root); 
}  