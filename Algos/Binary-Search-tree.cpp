#include <bits/stdc++.h>
using namespace std;
struct bf
{
    int data;
    bf *left;
    bf *right;
    bf(int data) : data{data}, left{nullptr}, right{nullptr} {}
};

void print_dfs(bf *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    print_dfs(root->left);
    print_dfs(root->right);
}
bf *insert(bf *node, int data)
{
    if (node == nullptr)
        return new bf(data);
    else if (data <= node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;
}
int main()
{
    // node declaration
    bf *root = new bf(3);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i != 3)
            insert(root, i);
    }

    print_dfs(root);
}