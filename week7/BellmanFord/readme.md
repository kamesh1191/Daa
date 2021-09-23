#include <bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int dest;
    int weight;
};

void solve(struct edge a[],int src, int v, int e){
    vector<int> dist(v,INT_MAX);
    dist[src]=0;
    for(int i=1;i<=v-1;i++){
        for(int j=0;j<e;j++){
            int u=a[j].source;
            int V=a[j].dest;
            int wt=a[j].weight;
            if(dist[u]!=INT_MAX && dist[u]+wt<dist[V]){
                dist[V]=dist[u]+wt;
            }
        }
    }

    int flag=0;
    for(int i=0;i<e;i++){
            int u=a[i].source;
            int V=a[i].dest;
            int wt=a[i].weight;
        if(dist[u]+wt<dist[V]){
            flag=1;
            break;
        }
    }

    if(flag) cout<<"Negative cycle exists.";
    else{
    for(int i=0;i<v;i++){
        cout<<i+1<<" "<<dist[i]<<endl;
    }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    struct edge g[e];
    for (int i = 0; i < e; i++)
    {
        int src, destination, wt;
        cin >> src >> destination >> wt;
        g[i].source=src;
        g[i].dest=destination;
        g[i].weight=wt;
    }
    int source;
    cin >> source;
    solve(g, source,v,e);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int minDist(vector<bool> &vis, vector<int> &dist)
{
    int small = INT_MAX, min_index;
    for (int v = 0; v < vis.size(); v++)
        if (vis[v] == false && dist[v] <= small)
            small = dist[v], min_index = v;

    return min_index;
}

void solve(vector<vector<int> > g, int src)
{
    int v = g.size();
    vector<bool> vis(v, false);
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        int u = minDist(vis, dist);
        vis[u] = true;
        for (int j = 0; j < v; j++)
        {
            if (!vis[j] && g[u][j] && dist[u] != INT_MAX && dist[u] + g[u][j] <= dist[j])
            {
                dist[j] = dist[u] + g[u][j];
            }
        }#include <bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int dest;
    int weight;
};

void solve(struct edge a[],int src, int v, int e){
    vector<int> dist(v,INT_MAX);
    dist[src]=0;
    for(int i=1;i<=v-1;i++){
        for(int j=0;j<e;j++){
            int u=a[j].source;
            int V=a[j].dest;
            int wt=a[j].weight;
            if(dist[u]!=INT_MAX && dist[u]+wt<dist[V]){
                dist[V]=dist[u]+wt;
            }
        }
    }

    int flag=0;
    for(int i=0;i<e;i++){
            int u=a[i].source;
            int V=a[i].dest;
            int wt=a[i].weight;
        if(dist[u]+wt<dist[V]){
            flag=1;
            break;
        }
    }

    if(flag) cout<<"Negative cycle exists.";
    else{
    for(int i=0;i<v;i++){
        cout<<i+1<<" "<<dist[i]<<endl;
    }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    struct edge g[e];
    for (int i = 0; i < e; i++)
    {
        int src, destination, wt;
        cin >> src >> destination >> wt;
        g[i].source=src;
        g[i].dest=destination;
        g[i].weight=wt;
    }
    int source;
    cin >> source;
    solve(g, source,v,e);
    return 0;
}

    }

    for (int i = 0; i < v; i++)
    {
        cout << i + 1 << " " << dist[i] << endl;
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)
    {
        int src, dest, wt;
        cin >> src >> dest >> wt;
        g[src][dest] = wt;
    }
    int source;
    cin >> source;
    solve(g, source);

    return 0;
}
