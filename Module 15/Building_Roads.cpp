// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e5+10;
// vector<int>adj[N];
// int visited[N];

// void dfs(int u)
// {
//     visited[u]=true;
//     for(int v:adj[u])
//     {
//         if(visited[v]) continue;
//         dfs(v);
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
//     vector<int>ledear;
//     for(int i=1;i<=n;i++)
//     {
//         if(visited[i]) continue;
//         dfs(i);
//         ledear.push_back(i);
//     }
//     cout<<ledear.size()-1<<endl;
//     for(int i=0;i<ledear.size()-1;i++)
//     {
//         cout<<ledear[i]<<" "<<ledear[i+1]<<endl;
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);

    double Average = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n",Average);

    return 0;
}