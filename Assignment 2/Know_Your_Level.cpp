#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
vector<int>value[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while (!q.empty())
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
    int x;
    cin>>x;
    bfs(0);

    for(int i=0;i<=N;i++)
    {
        if(level[i]==x)
        {
            value[x].push_back(i);            
        }
    }
    sort(value[x].begin(), value[x].end());
    if(x==0)
    {
        cout<<"0";
    }
    else if(value[x].empty())
    {
        cout<<"-1";
    }
    else
    {
        for(int val:value[x])
        {
            cout<<val<<" ";
        }
    }
    return 0;
}