

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+10;
char adj[N][N];
int visited[N][N];
int level[N][N];
pii parent[N][N];
vector<pii>comp;
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
                comp.push_back({ni,nj});
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
        }
    }
    int minArea=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(adj[i][j]=='-') continue;
            if(visited[i][j]) continue;
            bfs(i,j);
            int area=comp.size()+1;
            minArea=min(minArea,area);
            comp.clear();
        }
    }

    if(minArea==INT_MAX)
    {
        cout<<-1<<endl;
    } 
    else
    {
        cout<<minArea<<endl;
    }
    return 0;
}