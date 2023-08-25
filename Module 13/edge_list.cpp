#include<bits/stdc++.h>
using namespace std;
// const int N=1e3+10;
vector<pair<int,int>>v1;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        v1.push_back({u,v});
    }
 
    for(pair<int,int> x:v1)
    {
        cout<<x.first<<" "<<x.second<<endl;   
    }
    return 0;
}












// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> v;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
    
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v.push_back({a, b});
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     return 0;
// }