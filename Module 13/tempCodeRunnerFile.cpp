
#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{
    //section 1: actions just after entering noden u
    visited[u]=true;
    cout<<"Visited Node : "<<u<<endl;
    for(int v:adj[u])
    {
        //section 2: action befor entering a new neighber/child
        if(visited[v]==true) continue;
        dfs(v);
        //section 3: action after exting a neighbar
    }
    //section 4: action befor exting node u
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


    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"List "<<i<<": ";
    //     for(int j:adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    dfs(1);

    cout<<"Visited Aray "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<" Ststus : "<<visited[i]<<endl;
    }

    return 0;
}

