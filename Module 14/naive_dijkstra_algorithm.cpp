#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int INF=INT_MAX;
vector<pair<int,int>>adj[N];
vector<int>dis(N,INF);

void dijkstra(int source)
{
    queue<int>q;
    q.push(source);
    dis[source]=0;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        for(pair<int,int>v:adj[parent])
        {
            int childNode=v.first;
            int childCost=v.second;
            if(dis[parent]+childCost < dis[childNode])
            {
                dis[childNode]=dis[parent]+childCost;
                q.push(childNode);
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    dijkstra(1);

    for(int i=1;i<=n;i++)
    {
        cout<<"Node distance "<<i<<": "<<dis[i]<<endl;
    }
    return 0;
}