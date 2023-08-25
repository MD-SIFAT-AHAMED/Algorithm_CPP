// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e3+10;
// int visited[N][N];
// vector<string>g;
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
//     dfs(i,j-1);
//     dfs(i,j+1);
//     dfs(i-1,j);
//     dfs(i+1,j);
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
//     int room=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(g[i][j]=='#')continue;
//             if(visited[i][j]) continue;
//             dfs(i,j);
//             room++;
//         }
//     }
//     cout<<room<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int n,m;
// const int N=1e3+10;
// vector<string>g;
// int visited[N][N];

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
//     dfs(i,j+1);
//     dfs(i,j-1);
//     dfs(i+1,j);
//     dfs(i-1,j);
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
//     int room=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(g[i][j]=='#') continue;
//             if(visited[i][j]) continue;
//             dfs(i,j);
//             room++;
//         }
//     }
//     cout<<room<<endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;
int n,m;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
vector<pii>direc={{0,-1},{0,+1},{+1,0},{-1,0}};

bool isValid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i,int j)
{
    if(!isValid(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j]=='#') return;

    visited[i][j]=true;
    for(auto v:direc)
    {
        dfs(i+v.first,j+v.second);
    }
}
//     dfs(i,j+1);
//     dfs(i,j-1);
//     dfs(i+1,j);
//     dfs(i-1,j);
// }
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        g.push_back(s);
    }
    int room=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(g[i][j]=='#') continue;
            if(visited[i][j]) continue;
            dfs(i,j);
            room++;
        }
    }
    cout<<room<<endl;
    return 0;
}


