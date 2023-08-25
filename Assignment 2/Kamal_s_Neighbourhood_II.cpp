// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e5+5;
// vector<int>adj[N];
// bool visited[N];

// void bfs(int s)
// {
//     queue<int>q;
//     q.push(s);
//     visited[s]=true;
//     int count=0;
//     while(!q.empty())
//     {
//         int u=q.front();
//         q.pop();
//         for(int v:adj[u])
//         {
//             if(visited[v]==true) continue;
//             q.push(v);
//             visited[v]=true;
//             count++;
//         }
//     }
//     cout<<count;
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
//     int k;
//     cin>>k;
//     bfs(k);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e6+5;
// vector<int>adj[N];
// bool visited[N];

// int dfs(int u)
// {
//     int count=1;
//     visited[u]=true;
//     for(int v:adj[u])
//     {
//         if(visited[v]==true) continue;
//         count+=dfs(v);
//     }
//     return count;
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
//     int x;
//     cin>>x;
//     int val=dfs(x);
//     cout<<val-1;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// const int N = 20; 
// vector<int> adj[N];
// bool visited[N];

// void bfs(int s) {
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     int count = 0;
//     while (!q.empty()) {
//         int u = q.front();
//         q.pop();
//         for (int v : adj[u]) {
//             if (visited[v] == true) continue;
//             q.push(v);
//             visited[v] = true;
//             count++;
//         }
//     }
//     cout << count;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//     }
//     int k;
//     cin >> k;
//     bfs(k);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    int count=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            count++;
        }
    }
    cout<<count;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);  // This line adds a directed edge from u to v.
    }
    int k;
    cin>>k;
    bfs(k);
    return 0;
}