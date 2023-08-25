// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e3+5;
// char adj[N][N];
// bool visited[N][N];
// typedef pair<int,int>pii;
// vector<pii>path={{1,0},{-1,0},{0,1},{0,-1}};
// int n,m;
// bool isValid(int i,int j)
// {
//     return (i>=0 && i<n && j>=0 && j<m);
// }
// void dfs(int si,int sj)
// {
//     if(!isValid(si,sj)) return;
//     if(visited[si][sj]) return;
//     if(adj[si][sj]=='-') return;
//     visited[si][sj]=true;
//     for(pii v:path)
//     {
//         dfs(si+v.first,sj+v.second);
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
//     int si,sj,di,dj;
//     cin>>si>>sj>>di>>dj;
//     dfs(si,sj);

//     if(level[di][dj]!=0)
//     {
//         cout<<"YES"<<endl;
//     }
//     else 
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+10;
char adj[N][N];
int visited[N][N];
int level[N][N];
pii parent[N][N];
int n,m;
vector<pii>direc={{0,-1},{0,+1},{1,0},{-1,0}};
bool isValid(int i,int j)
{
    return(i>=0 && i<n && j>=0 && j<m);
}
void bfs(int si,int sj)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj]=true;
    level[si][sj]=0;

    while(!q.empty())
    {
        pii upair=q.front();
        int i=upair.first;
        int j=upair.second;
        q.pop();
        for(auto v:direc)
        {
            int ni=i+v.first;
            int nj=j+v.second;

            if(isValid(ni,nj) && !visited[ni][nj] && adj[ni][nj]!='-')
            {
                q.push({ni,nj});
                level[ni][nj]=level[i][j]+1;
                visited[ni][nj]=true;
                parent[ni][nj]={i,j};
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
            visited[i][j] = false;
        }
    }
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    bfs(si,sj);

    if(visited[di][dj])
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}