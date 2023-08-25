// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int,int>pii;
// const int N=1e3+5;
// vector<string>g;
// bool visited[N][N];
// vector<pii>path={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;

// bool isValid(int i,int j)
// {
//     return (i>=0 && i<n && j>=0 && j<m);
// }
// void dfs(int i,int j)
// {
//     if(!isValid(i,j)) return;
//     if(visited[i][j]) return;
//     if(g[i][j]=='#') return;
//     visited[i][j]=true;
//     for(pii v:path)
//     {
//         dfs(i+v.first,j+v.second);
//     }
// }

// int main()
// {
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         string s;
//         cin>>s;
//         g.push_back(s);
//     }
//     int count_room=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(g[i][j]=='#') continue;
//             if(visited[i][j]) continue;
//             {
//                 dfs(i,j);
//                 count_room++;
//             }
//         }
//     }
//     cout<<count_room;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
char adj[N][N];
bool visited[N][N];
typedef pair<int,int>pii;
vector<pii>path={{0,-1},{0,1},{-1,0},{1,0}};
int n,m;

bool isValid(int i,int j)
{
    return(i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i,int j)
{
    if(!isValid(i,j)) return;
    if(adj[i][j]=='#') return;
    if(visited[i][j]) return;
    visited[i][j]=true;
    for(pii v:path)
    {
        dfs(i+v.first,j+v.second);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]) continue;
            if(adj[i][j]=='#') continue;
            dfs(i,j);
            count++;
        }
    }
    cout<<count;
    return 0;
}

