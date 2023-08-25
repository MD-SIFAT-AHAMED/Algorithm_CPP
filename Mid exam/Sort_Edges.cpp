
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>adj[N];
// int main()
// {
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//     }
//     for(int i=1;i<=N;i++)
//     {
//         sort(adj[i].begin(),adj[i].end());
//         for(int v:adj[i])
//         {
//             cout<<i<<" "<<v<<endl;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int m;
    cin>>m;
    vector<pair<int,int>>path;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
    path.push_back({u, v});
    }
    sort (path.begin(),path.end());
    for(auto v:path) 
    {
        cout<<v.first<<" "<<v.second<<endl;
    }

    return 0;
}
