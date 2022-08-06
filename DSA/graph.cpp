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
bool bfsCycleDetect(unordered_map<int, list<int>> adjList, unordered_map<int, bool> &visited, unordered_map<int, int> &parent, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    parent[node] = -1;
    while (!q.empty())
    {
        int target = q.front();
        q.pop();
        for (auto i : adjList[target])
        {
            if (!parent[i])
            {
                parent[i] = target;
            }
            if (!visited[i] && target == parent[i])
            {
                q.push(i);
                visited[i] = 1;
            }
            else if (visited[i] && i != parent[target])
                return 1;
        }
    }
}
string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Write your code here.
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    unordered_map<int, int> parentList;
    // create adjacency list
    for (int i = 0; i < m; i++)
    {
        adjList[edges[i][0]].push_back(edges[i][1]);
        adjList[edges[i][1]].push_back(edges[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (bfsCycleDetect(adjList, visited, parentList, i))
            {
                return "Yes";
            }
        }
    }
    return "No";
}
#include <bits/stdc++.h>
bool dfsCycleDetect(unordered_map<int, list<int>> adjList, unordered_map<int, bool> &visited, unordered_map<int, int> &parent, int node)
{
    visited[node] = 1;
    for (auto i : adjList[node])
    {
        if (visited[i] && i != parent[node])
            return 1;
        else
        {
            if (!visited[i])
            {
                parent[i] = node;
                dfsCycleDetect(adjList, visited, parent, i);
            }
        }
    }
}
string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Write your code here.
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    unordered_map<int, int> parentList;
    // create adjacency list
    for (int i = 0; i < m; i++)
    {
        adjList[edges[i][0]].push_back(edges[i][1]);
        adjList[edges[i][1]].push_back(edges[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            parentList[i] = -1;
            if (dfsCycleDetect(adjList, visited, parentList, i))
            {
                return "Yes";
            }
        }
    }
    return "No";
}

#include <unordered_map>
#include <list>

bool dfsCycleHelper(unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adjList, int node)
{
    visited[node] = true;
    dfsVisited[node] = true;
    for (auto i : adjList[node])
    {
        if (!visited[i])
        {
            if (dfsCycleHelper(visited, dfsVisited, adjList, i))
                return true;
        }
        else if (dfsVisited[i])
        {
            return true;
        }
    }
    dfsVisited[node] = false;
    return false;
}
int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    for (int i = 0; i < edges.size(); i++)
    {
        adjList[edges[i].first].push_back(edges[i].second);
        // adjList[edges[i].second].push_back(edges[i].first);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfsCycleHelper(visited, dfsVisited, adjList, i))
                return 1;
        }
    }
    return 0;
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