#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int> > g, int v)
{
    vector<int> color(v, -1);
    queue<int> q;
    q.push(0);
    color[v] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        if (g[temp][temp] == 1)
            return false;
       
        for (int i = 0; i < v; i++)
        {
            if (g[temp][i] && color[i] == -1)
            {#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int> > g, bool &flag, vector<bool> &vis, int src, int dest)
{
    if (src == dest)
    {
        flag = true;
        return;
    }
    vis[src] = true;
    for (int i = 0; i <g[src].size(); i++)
    {
        if (g[src][i] && !vis[i])
        {
            dfs(g, flag, vis, i, dest);
        }
    }
    vis[src] = false;
}

int main()
{#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int> > g, int v)
{
    vector<int> color(v, -1);
    queue<int> q;
    q.push(0);
    color[v] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        if (g[temp][temp] == 1)
            return false;
       
        for (int i = 0; i < v; i++)
        {
            if (g[temp][i] && color[i] == -1)
            {
                color[i] = 1 - color[temp];
                q.push(i);
            }
            else if (g[temp][i] && color[i] == color[temp])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    if (bfs(g, v))
    {
        cout << "Yes Barpartite";
    }
    else
    {
        cout << "Not Barpartite";
    }
    return 0;
}
    int v, e;
    cin >> v >> e;   //enter no of nodes and edges
    int src, dest;  //enter source and destination
    cin >> src >> dest;
    src--; dest--;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)                    //creating adjacency matrix
    {                                              // x and y are source to destination in a graph
        int x, y;
        cin >> x >> y;
        x-- , y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    
    vector<bool> vis(v, false);
    bool flag = false;
    dfs(g, flag, vis, src, dest);
    if (flag)
        cout << "Yes Path Exists";
    else
        cout << "No Such Path Exists";
    return 0;
}
                color[i] = 1 - color[temp];
                q.push(i);
            }
            else if (g[temp][i] && color[i] == color[temp])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    if (bfs(g, v))
    {
        cout << "Yes Barpartite";
    }
    else
    {
        cout << "Not Barpartite";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int> > g, bool &flag, vector<bool> &vis, int src, int dest)
{
    if (src == dest)
    {
        flag = true;
        return;
    }
    vis[src] = true;
    for (int i = 0; i <g[src].size(); i++)
    {
        if (g[src][i] && !vis[i])
        {
            dfs(g, flag, vis, i, dest);
        }
    }
    vis[src] = false;
}

int main()
{
    int v, e;
    cin >> v >> e;   //enter no of nodes and edges
    int src, dest;  //enter source and destination
    cin >> src >> dest;
    src--; dest--;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)                    //creating adjacency matrix
    {                                              // x and y are source to destination in a graph
        int x, y;
        cin >> x >> y;
        x-- , y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    
    vector<bool> vis(v, false);
    bool flag = false;
    dfs(g, flag, vis, src, dest);
    if (flag)
        cout << "Yes Path Exists";
    else
        cout << "No Such Path Exists";
    return 0;
}
