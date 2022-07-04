// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node* solve(int in[],int pre[], int &index,int l,int r ,int n,map<int,int>&mp)
    {
        if(index >= n || l>r)
        return NULL;
        int el = pre[index++];
    
        Node* root = new Node(el);
        int pos = mp[el];
        root->left = solve(in,pre,index,l,pos-1,n,mp);
        root->right = solve(in,pre,index,pos +1,r,n,mp);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[in[i]] = i;
        }
        int index = 0;
       Node* ans =  solve(in,pre,index,0,n-1,n,mp);
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends