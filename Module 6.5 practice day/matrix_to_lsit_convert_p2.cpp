#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
vector<int>adj[N];

int main()
{
    int row,col;
    cin>>row;
    col=row;
    int ar[row][col];
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]==1)
            {
                adj[i].push_back(j);
            }
        }
    }

    for(int i=1;i<=row;i++)
    {
        cout<<"List "<<i<<": ";
        for(int v:adj[i])
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}