// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    Node* nodeToParent(Node* root,int target,map<Node*,Node*>&mp)
    {
        queue<Node*>q;
        Node* res = NULL;
        q.push(root);
        mp[root] = NULL;
        while(!q.empty())
        {
            Node* tmp = q.front();
            q.pop();
            if(tmp->data == target)
            res = tmp;
            if(tmp->left)
           { mp[tmp->left] = tmp;
               q.push(tmp->left);
           }
            if(tmp->right)
            {mp[tmp->right] = tmp;
                q.push(tmp->right);
            }
        }
        return res;
    }
    int burnTree(Node* target,map<Node*,Node*>&mp)
    {
        map<Node*,bool>visited;
       // cout<<mp.size()<<endl;
        queue<Node*>q;
        int ans =0;
        q.push(target);
        visited[target] = 1;
        while(!q.empty())
        {
            bool flag =0;
            int size = q.size();
            for(int i =0;i<size;i++)
            {
                Node* tmp = q.front();
                q.pop();
                if(tmp->left && !visited[tmp->left])
                {
                    q.push(tmp->left);
                    visited[tmp->left] =1;
                    flag =1;
                }
                 if(tmp->right && !visited[tmp->right])
                {
                    q.push(tmp->right);
                    visited[tmp->right] =1;
                    flag =1;
                }
                if(mp[tmp] && !visited[mp[tmp]])
                {
                    q.push(mp[tmp]);
                    visited[mp[tmp]] = 1;
                    flag =1;
                }
            }
            if(flag)
            {
               
                ans++;
               //  cout<<ans<<endl;
            }
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
       // Create a map for parent node
       // Find target element
       //mark visited nodes and find time
       
       map<Node*,Node*>mp;
       Node* targetNode = nodeToParent(root,target,mp);
       int ans=0;
       ans= burnTree(targetNode,mp);
       return ans;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends