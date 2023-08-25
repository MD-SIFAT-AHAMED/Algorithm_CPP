#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int INF=INT_MAX;
typedef pair<int,int>pii;
vector<pii>adj[N];
vector<int>dis(N,INF);
bool visited[N];

void dijkstra(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dis[source]=0;
    pq.push({dis[source],source});
    while(!pq.empty())
    {
        int parent=pq.top().second;
        pq.pop();
        visited[parent]=true;
        for(pii v:adj[parent])
        {
            int n=v.first;
            int w=v.second;
            if(visited[n])continue;
            if(dis[n] > dis[parent]+w)
            {
                dis[n]=dis[parent]+w;
                pq.push({dis[n],n});
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
        cout<<"Distance "<<i<<": "<<dis[i]<<endl;
    }
    return 0;
}