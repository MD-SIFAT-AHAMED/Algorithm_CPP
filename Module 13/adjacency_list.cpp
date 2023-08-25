#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>adj[N];
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

    for(int i=1;i<=n;i++)
    {
        cout<<"index "<<i<<" :";
        for(int v:adj[i])
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"Index "<<i<<":";
    //     for(int j=0;j<adj[i].size();j++)
    //     {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}