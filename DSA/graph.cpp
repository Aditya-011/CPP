#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
    // unordered_map<T,list<T>>adj;
    vector<vector<int>> vec;
    int nodes =0;
public:
    graph(int n)
    {
        this->nodes = n;
        for (int i = 0; i < nodes; i++)
        {
            vector<int>tmp;
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