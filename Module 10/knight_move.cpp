#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
int level[N][N];
int n;
vector<pii>direc={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

bool isValid(int i,int j)
{
    return(i>=0 && i<8 && j>=0 && j<8);
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

            if(isValid(ni,nj) && !visited[ni][nj])
            {
                q.push({ni,nj});
                level[ni][nj]=level[i][j]+1;
                visited[ni][nj]=true;
            }
        }
    }

}
void reset_level_vis()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            level[i][j]=0;
            visited[i][j]=false;
        }
    }
}
int main()
{
    int si,sj,di,dj;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x,y;
        cin>>x>>y;
        si=x[0]-'a';
        sj=x[1]-'1';

        di=y[0]-'a';
        dj=y[1]-'1';
        bfs(si,sj);
        cout<<level[di][dj]<<endl;
        reset_level_vis();
    }
    return 0;
}