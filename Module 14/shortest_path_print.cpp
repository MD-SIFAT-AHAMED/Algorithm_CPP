#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source]=true;
    level[source]=0;
    parent[source]=-1;
    while (!q.empty())
    {
        int Node=q.front();
        q.pop();
        for(int v:adj[Node])
        {
            if(visited[v])continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[Node]+1;
            parent[v]=Node;
        }
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    bfs(s);

    vector<int>path;
    int current=d;
    while (current != -1)
    {
        path.push_back(current);
        current=parent[current];
    }
    reverse(path.begin(),path.end());

    for(int v:path)
    {
        cout<<v<<" ";
    }
    
    return 0;
}