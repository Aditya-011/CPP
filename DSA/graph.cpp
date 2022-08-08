#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
public:
    // unordered_map<T,list<T>>adj;
    vector<vector<T>> vec;
    int nodes = 5;
    unordered_map<T, list<pair<T, T>>> adj;

    /* graph(int n)
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
     }*/

    void addEdge(T u, T v, T d, bool direction)
    {
        adj[u].push_back(make_pair(v, d));
        /* if (!direction)
             adj[v][u] = 1;*/
    }
    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " --> ";
            for (auto j : i.second)
                cout << "(" << j.first << ", " << j.second << ") "
                     << ", ";
            cout << endl;
        }
    }
    void topologicalDFS(T node, stack<T> &s, unordered_map<T, bool> &vis)
    {
        vis[node] = 1;
        for (auto i : adj[node])
        {
            if (!vis[i.first])
            {
                topologicalDFS(i.first, s, vis);
            }
        }
        s.push(node);
    }
    void calcDistance()
    {
        T src = 1;
        unordered_map<T, bool> vis;
        stack<T> s;
        topologicalDFS(src, s, vis);
        vector<T> dis(nodes);
        for (int i = 0; i < nodes; i++)
        {
            dis[i] = INT_MAX;
        }
        dis[src] = 0;
        while (!s.empty())
        {
            /* code */
            T top = s.top();
            s.pop();
            // cout<<top<<" //";
            if (dis[top] != INT_MAX)
                ;
            {
                for (auto i : adj[top])
                {
                    if (dis[i.first] > dis[top] + i.second)
                        dis[i.first] = dis[top] + i.second;
                }
            }
        }
        cout << "Shortest path array : " << endl;
        for (int i = 0; i < dis.size(); i++)
        {
            cout << dis[i] << " ";
        }
    }

    /* void printMatrix()
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
/*
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
        // Topological Sort using DFS
         void findTopoSort(int node, vector < int > & vis, stack < int > & st, unordered_map<int,list<int>> &adj) {
    vis[node] = 1;

    for (auto it: adj[node]) {
      if (!vis[it]) {
        findTopoSort(it, vis, st, adj);
      }
    }
    st.push(node);
  }
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    stack < int > st;
      vector < int > vis(e, 0);
   unordered_map<int,list<int>> adj;
   for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        // adjList[edges[i].second].push_back(edges[i].first);
    }
      for (int i = 0; i < e; i++) {
        if (vis[i] == 0) {
          findTopoSort(i, vis, st, adj);
        }
      }
      vector < int > topo;
      while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
      }
      return topo;

}
///////////////

                // Kahn's Algortihm (topological sort using BFS)
vector<int> topologicalSortBFS(vector<vector<int>> &edges, int v, int e)  {
    // create adjList
    unordered_map<int,list<int>>adj;
    vector<int>ans;
    for(int i =0;i<e;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>indegree(v);
    for(auto i : adj)
    {
        for(auto j : i.second)
        {
            indegree[j]++;
        }
    }
    queue<int>q;
    for(int i =0 ;i<v;i++)
    {
        if(indegree[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto i : adj[front])
        {
            indegree[i]--;
            if(indegree[i] == 0)
                q.push(i);
        }
    }
    return ans;
}

        /// Cycle detection using BFS
int detectCycleInDirectedGraphUsingBFS(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
     unordered_map<int,list<int>>adj;
   int count =0;
    for(int i =0;i<edges.size();i++)
    {
        adj[edges[i].first-1].push_back(edges[i].second-1);
    }
    vector<int>indegree(n);
    for(auto i : adj)
    {
        for(auto j : i.second)
        {
            indegree[j]++;
        }
    }
    queue<int>q;
    for(int i =0 ;i<n;i++)
    {
        if(indegree[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
       count++;
        for(auto i : adj[front])
        {
            indegree[i]--;
            if(indegree[i] == 0)
                q.push(i);
        }
    }
 if(count == n)
     return 0;
    else
        return 1;
}
        ///////////////////////////
        //     Shortest Path in undirected Graph
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
    // create adjlist
    unordered_map<int,list<int>>adj;
    unordered_map<int,int> parent;
    unordered_map<int,bool> visited;
    for(int i=0;i<m;i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
         adj[edges[i].second].push_back(edges[i].first);
    }
      queue<int>q;
    q.push(s);
    parent[s] = -1;
     visited[s] = true;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        for(auto i : adj[front])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = front;
            }
        }
    }
    // prepare shortest path
    vector<int>ans;
    int curr = t;

    while(curr != -1)
    {
         ans.push_back(curr);
        curr = parent[curr];
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
    //////////////
    */
//          shortest distance in DAG
///                     Dijkkstra's algorithm
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    // create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        adj[vec[i][0]].push_back(make_pair(vec[i][1], vec[i][2]));
        adj[vec[i][1]].push_back(make_pair(vec[i][0], vec[i][2]));
    }
    vector<int> dis(vertices);
    for (int i = 0; i < vertices; i++)
        dis[i] = INT_MAX;
    set<pair<int, int>> st;
    int src = 0;
    dis[src] = 0;
    st.insert(make_pair(dis[src], src));
    while (!st.empty())
    {
        // get topmost element
        auto top = *(st.begin());
        st.erase(st.begin());
        int nodeValue = top.second;
        int nodeDistance = top.first;
        for (auto i : adj[nodeValue])
        {
            if (nodeDistance + i.second < dis[i.first])
            {
                if (st.find(make_pair(i.second, i.first)) != st.end())
                    st.erase(make_pair(i.second, i.first));
                dis[i.first] = nodeDistance + i.second;
                st.insert(make_pair(dis[i.first], i.first));
            }
        }
    }
    return dis;
}
///

///     prim's algo
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < m; i++)
    {
        adj[g[i].first.first].push_back(make_pair(g[i].first.second, g[i].second));
        adj[g[i].first.second].push_back(make_pair(g[i].first.first, g[i].second));
    }
    unordered_map<int, int> key, mst, parent;
    int sum = 0;
    int src = 1;

    for (int i = 1; i <= n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = 0;
    }
    key[src] = 0;
    while (sum < n)
    {
        int u, minEl = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (key[i] < minEl && mst[i] == 0)
            {
                u = i;
                minEl = key[i];
            }
        }
        mst[u] = 1;
        for (auto i : adj[u])
        {
            if (key[i.first] > i.second && mst[i.first] == 0)
            {
                key[i.first] = i.second;
                parent[i.first] = u;
            }
        }
        sum++;
    }
    vector<pair<pair<int, int>, int>> res;
    for (int i = 2; i <= n; i++)
    {
        res.push_back({{parent[i], i}, key[i]});
    }
    return res;
}
/////////////////

        ///          kruskal's algo and disjoint sets
#include <algorithm>

bool cmp(vector<int> &a, vector<int> &b)
{

    return a[2] < b[2];
}

// dsu function

int findset(int i, vector<int> &parent)
{

    if (parent[i] == -1)
    {

        return i;
    }

    return parent[i] = findset(parent[i], parent);
}

void unionset(int x, int y, vector<int> &parent, vector<int> &rank)
{

    int s1 = findset(x, parent);

    int s2 = findset(y, parent);

    if (s1 != s2)
    {

        if (rank[s1] <= rank[s2])
        {

            parent[s1] = s2;

            rank[s2] += rank[s1];
        }
        else
        {

            parent[s2] = s1;

            rank[s1] += rank[s2];
        }
    }
}

int minimumSpanningTree(vector<vector<int>> &edges, int n)

{

    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(n);

    vector<int> rank(n);

    for (int i = 0; i < n; i++)
    {

        parent[i] = -1;

        rank[i] = 1;
    }

    int cost = 0;

    for (int i = 0; i < edges.size(); i++)
    {

        int u = findset(edges[i][0], parent);

        int v = findset(edges[i][1], parent);

        if (u != v)
        {

            cost += edges[i][2];

            unionset(u, v, parent, rank);
        }
    }

    return cost;
}

int main()
{
    cout << "Enter the number of nodes : ";
    int n;
    cin >> n;
    cout << "Enter the number of edges : \n";
    int m;
    cin >> m;
    graph<int> g;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(0, 2, 3, 1);
    g.addEdge(1, 2, 2, 1);
    g.addEdge(1, 3, 6, 1);
    g.addEdge(2, 3, 7, 1);
    g.addEdge(2, 4, 4, 1);
    g.addEdge(2, 5, 2, 1);
    g.addEdge(3, 4, -1, 1);
    g.addEdge(4, 5, -2, 1);

    g.printAdjList();
    g.calcDistance();
}