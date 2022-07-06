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
        this->data = n;
        this->left = NULL;
        this->right = NULL;
    }
};
Tree *buildTree(Tree *root)
{
    // Get data for root node;
    cout << "Enter data for root node\n";
    int d;
    cin >> d;
    root = new Tree(d);
    // Check if input is -1
    if (d == -1)
        return NULL;

    // populate left subtree
    cout << "Enter data for left of " << d << endl;

    root->left = buildTree(root->left);
    cout << "Enter data for right of " << d << endl;

    root->right = buildTree(root->right);
    return root;
}
void levelOrderTreversal(Tree *root) // Breadth first Search (BFS)
{
    queue<Tree *> q;
    if (root)
    {
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            Tree *temp = q.front();
            q.pop();
            if (!temp)
            {
                cout << endl;
                if (!q.empty())
                    q.push(NULL);
            }
            else
            {
                cout << temp->data << " ";
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
    }
}

// Depth First Search (DFS)
// L -> Left, R->Right, N-> Root Node
// Inorder Traversal --> LNR
// Preorder Traversal --> NLR
// PostOrder traversal --> LRN
void inOrderTraversal(Tree *root)
{
    if (!root)
        return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Tree *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Tree *root)
{
    if (!root)
        return;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(Tree* &root)
{
    queue<Tree *> q;
    cout << "Enter data for root node : \n";
    int data;
    cin >> data;
    root = new Tree(data);
    q.push(root);
    while (!q.empty())
    {
        Tree *temp = q.front();
        q.pop();
        cout<< "Left of "<<temp->data<<endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Tree(leftData);
            q.push(temp->left);
        }
        cout<< "Right of "<<temp->data<<endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Tree(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    Tree *root = NULL;
    buildFromLevelOrder(root);
    //root = buildTree(root);
     levelOrderTreversal(root);
    // inOrderTraversal(root);
    //  preOrderTraversal(root);
    //postOrderTraversal(root);
}