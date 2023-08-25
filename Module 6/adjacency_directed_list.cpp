#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
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
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"List "<<i<<": ";
        for(int j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}








// 1 2 13
// 2 4 14
// 1 3 15
// 3 2 16
// 4 1 17