#include<bits/stdc++.h>
using namespace std;
class Tree 
{
    private:
    int data;
    Tree* left;
    Tree* right;
    public:
    Tree(int n)
    {
        data=n;
        right=NULL;
        left=NULL;
    }
};
int main()
{
    Tree* root = new Tree(1);
    
}