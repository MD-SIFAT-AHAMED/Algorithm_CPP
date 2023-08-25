#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
bool visited[N];
vector<int>adj[N];
int level[N];
int parant[N];

void bfs(int s) //bfs  total O(N+M)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    parant[s]=-1;
    while(!q.empty()) //O(N)
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u]) //O(M)
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            parant[v]=u;
        }
    }
}


int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++) //O(N)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    bfs(s);
    cout<<"Distace -> "<<level[d]<<endl;

    vector<int>path;
    int current=d;
    while(current!=-1)
    {
        path.push_back(current);
        current=parant[current];
    }

    reverse(path.begin(),path.end());
    for(int node:path)
    {
        cout<<node<<" ";
    }
    return 0;
}


//total complexity BFS    O(N+M)