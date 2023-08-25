#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>adj[N];
bool visited[N];
vector<int>comp;
void dfs(int u)
{
    visited[u]=true;
    comp.push_back(u);
    for(int v:adj[u])
    {
        if(visited[v])continue;
        dfs(v);
        visited[v]=true;
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
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i);
            count++;
            for(int val:comp)
            {
                cout<<val<<" ";
            }
            cout<<endl;
            comp.clear();
        }
    }
    cout<<"Total compnend : "<<count;
    return 0;
}