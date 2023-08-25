#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;
const int N=1e3+10;
vector<int>g[N][N];
int visited[N][N];
int level[N][N];
int n,m;
vector<pii>direc={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

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
    int test;
    cin>>test;
    while(test--)
    {
        int si,sj,di,dj;
        cin>>n>>m>>si>>sj>>di>>dj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                visited[i][j]=false;
            }
        }
        bfs(si,sj);
        if(!visited[di][dj]) 
        {
            cout<<"-1"<<endl;
        } 
        else 
        {
            cout<<level[di][dj]<<endl;
        }
        reset_level_vis();
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int,int> pii;
// const int N = 105;  // Maximum board size
// const int INF = 1e9; // A large value to represent infinity

// int n, m;
// int level[N][N];
// bool visited[N][N];
// vector<pii> direc = {{1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1}};

// bool isValid(int i, int j) {
//     return (i >= 0 && i < n && j >= 0 && j < m);
// }

// void bfs(int si, int sj) {
//     queue<pii> q;
//     q.push({si, sj});
//     visited[si][sj] = true;
//     level[si][sj] = 0;

//     while (!q.empty()) {
//         pii upair = q.front();
//         int i = upair.first;
//         int j = upair.second;
//         q.pop();

//         for (auto v : direc) {
//             int ni = i + v.first;
//             int nj = j + v.second;

//             if (isValid(ni, nj) && !visited[ni][nj]) {
//                 q.push({ni, nj});
//                 level[ni][nj] = level[i][j] + 1;
//                 visited[ni][nj] = true;
//             }
//         }
//     }
// }

// int main() {
//     int test;
//     cin >> test;

//     while (test--) {
//         int si, sj, di, dj;
//         cin >> n >> m >> si >> sj >> di >> dj;

//         // Initialize the visited array
//         memset(visited, false, sizeof(visited));
        
//         // Perform BFS from the source cell
//         bfs(si, sj);

//         if (!visited[di][dj]) {
//             cout << "-1" << endl;
//         } else {
//             cout << level[di][dj] << endl;
//         }
//     }

//     return 0;
// }
