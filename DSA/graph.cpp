#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
    // unordered_map<T,list<T>>adj;
    vector<vector<int>> vec;
    int nodes = 0;

public:
    graph(int n)
    {
        this->nodes = n;
        for (int i = 0; i < nodes; i++)
        {
            vector<int> tmp;
            for (int j = 0; j < nodes; j++)
            {
                tmp.push_back(0);
            }
            vec.push_back(tmp);
        }
    }

    void addEdge(T u, T v, bool direction)
    {
        vec[u][v] = 1;
        if (!direction)
            vec[v][u] = 1;
    }
    void printMatrix()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
            {
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Adjacency List
    /* void addEdge(T u,T v,bool direction)
     {
         // direction 1->  undirected
         // direction 0 -> directed
         adj[u].push_back(v);
         if(!direction)
         {
             adj[v].push_back(u);
         }
     }
     void printAdjList()
     {
         for(auto i : adj)
         {
         cout<<i.first<<" --> ";
         for(auto j : i.second)
         cout<<j<<", ";
         cout<<endl;
         }
     }*/
};
void bfsHelper(unordered_map<int, list<int>> adjList, unordered_map<int, bool> &visited, vector<int> &ans, int &i)
{
    queue<int> q;
    q.push(i);
    visited[i] = 1;
    while (!q.empty())
    {
        int target = q.front();
        for (auto i : adjList[target])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
        q.pop();
        ans.push_back(target);
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int> ans;
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    for (int i = 0; i < edges.size(); i++)
    {
        adjList[edges[i].first].push_back(edges[i].second);
        adjList[edges[i].second].push_back(edges[i].first);
    }
    for (int i = 0; i < edges.size(); i++)
        visited[i] = 0;
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
            bfsHelper(adjList, visited, ans, i);
    }
    return ans;
}

void dfsHelper(unordered_map<int, set<int>> &adjList, vector<int> &tmp, int i, unordered_map<int, bool> &visited)
{
    tmp.push_back(i);
    visited[i] = 1;
    for (auto j : adjList[i])
    {
        if (!visited[j])
            dfsHelper(adjList, tmp, j, visited);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int, set<int>> adjList;
    unordered_map<int, bool> visited;
    vector<vector<int>> res;
    // int count=0;
    // Create adjacency list
    for (int i = 0; i < E; i++)
    {
        adjList[edges[i][0]].insert(edges[i][1]);
        adjList[edges[i][1]].insert(edges[i][0]);
    }
    for (int i = 0; i < V; i++)
    {

        if (!visited[i])
        {
            // count++;
            vector<int> tmp;
            dfsHelper(adjList, tmp, i, visited);
            res.push_back(tmp);
        }
    }
    return res;
}
int main()
{
    cout << "Enter the number of nodes : ";
    int n;
    cin >> n;
    cout << "Enter the number of edges : ";
    int m;
    cin >> m;
    graph<int> g(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 1);
    }
    g.printMatrix();
}