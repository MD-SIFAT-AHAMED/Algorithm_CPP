// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e3+5;
// char adj[N][N];
// typedef pair<int,int>pii;
// bool visited[N][N];
// int dis[N][N];
// vector<pii>path={{0,1},{0,-1},{-1,0},{1,0}};
// int n,m;

// bool isValid(int i,int j)
// {
//     return (i>=0 && i<n && j>=0 && j<m);
// }
// void bfs(int s1 ,int s2)
// {
//     queue<pii>q;
//     q.push({s1,s2});
//     visited[s1][s2]=true;
//     dis[s1][s2]=0;
//     while(!q.empty())
//     {
//         pii parent=q.front();
//         q.pop();
//         int pi=parent.first;
//         int pj=parent.second;
//         for(pii v:path)
//         {
//             int ci=pi+v.first;
//             int cj=pj+v.second;
//             if(isValid(ci,cj) && !visited[ci][cj])
//             {
//                 q.push({ci,cj});
//                 visited[ci][cj]=true;
//                 dis[ci][cj]=dis[pi][pj]+1;
//             }
//         }
//     }
// }
// int main()
// {
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>adj[i][j];
//         }
//     }
//     int s1,s2;
//     cin>>s1>>s2;
//     bfs(s1,s2);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<dis[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }













#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
char adj[N][N];
bool visited[N][N];
int dis[N][N];
typedef pair<int,int>pii;
vector<pii>path={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool isValid(int i,int j)
{
    return(i>=0 && i<n && j>=0 && j<m);
}
void bfs(int si,int sj)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pii parent=q.front();
        int paren1=parent.first;
        int paren2=parent.second;
        q.pop();
        for(int i=0;i<path.size();i++)
        {
            pii v=path[i];
            int child1=paren1+v.first;
            int child2=paren2+v.second;
            if(isValid(child1,child2) && !visited[child1][child2])
            {
                q.push({child1,child2});
                visited[child1][child2]=true;
                dis[child1][child2]=dis[paren1][paren2]+1;
            }
        }
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
    int si,sj;
    cin>>si>>sj;
    bfs(si,sj);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
