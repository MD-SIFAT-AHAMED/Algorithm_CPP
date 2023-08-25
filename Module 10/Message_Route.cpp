#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>adj[N];
vector<bool>visited(N,false);
vector<int>level(N,0);
vector<int>parent(N,-1);

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source]=true;
    level[source]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            parent[v]=u;
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
    bfs(1);

    vector<int>path;
    int current=n;
    if(level[n]==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    else
    {
        cout<<level[n]<<endl;
    }
    while(current !=-1)
    {
        path.push_back(current);
        current=parent[current];
    }
    reverse(path.begin(),path.end());
   
    for(int p:path)
    {
        cout<<p<<" ";
    }
    return 0;
}
