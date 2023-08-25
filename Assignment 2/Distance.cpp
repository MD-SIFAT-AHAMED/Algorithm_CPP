#include<bits/stdc++.h>
using namespace std;

const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
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
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        memset(visited, false, sizeof(visited));
        memset(level, 0, sizeof(level));
        bfs(a);
        if(!visited[b])
        {
            cout<<"-1"<<endl;
        }
        else
        {
           cout<<level[b]<<endl;
        }
    } 
    return 0;
}

