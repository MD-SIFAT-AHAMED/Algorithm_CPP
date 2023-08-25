// #include<bits/stdc++.h>
// using namespace std;
// const int N=1000;
// vector<int>adj[N];
// bool visited[N];

// void dfs(int u)
// {
//     visited[u]=true;
//     for(int v:adj[u])
//     {
//         if(visited[v]==true) continue;
//         dfs(v);
//         visited[v]=true;
//     }
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int cc=0;
//     for(int i=1;i<=n;i++)
//     {
//         if(visited[i]==true) continue;
//         dfs(i);
//         cc++;
//     }
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int>adj[N];
bool visited[N];

int bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    int count=0;

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        count++;
        for(int v:adj[x])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return count;
}

int main()
{
    int n,m;
    cin >>n>>m;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int>st;

    for(int i=0;i<=N;i++)
    {
        if(!visited[i])
        {
            int size=bfs(i);
            if(size>1) 
            {
                st.push_back(size);
            }
        }
    }

    sort(st.begin(),st.end());

    for(int size:st)
    {
        cout<<size<<" ";
    }
    return 0;
}