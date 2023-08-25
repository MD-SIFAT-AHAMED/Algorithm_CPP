#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
vector<int>adj[N];
bool visited[N];
int hieght[N];

void dfs(int u)
{
    visited[u]=true;
    for(int v:adj[u])
    {
        if(visited[v]==true) continue;
        dfs(v);
        hieght[u]=max(hieght[u],hieght[v]+1);
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
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(i==x)
        {
            cout<<"Hieght of "<<i<<"="<<hieght[i];
        }
    }
    return 0;
}