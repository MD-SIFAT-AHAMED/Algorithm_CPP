// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     int k;
//     cin>>k;
//     bool flag=false;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i] == k)
//         {
//             cout<<i;
//             flag=true;
//         }
//     }
//     if(flag==false)
//     {
//         cout<<"Not Found";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
        int mid_index= (l+r)/2;
        if(ar[mid_index]==x)
        {
            flag=true;
            cout<<mid_index;
            break;
        }
        if(x>ar[mid_index])
        {
            l=mid_index+1;
        }
        else
        {
            r=mid_index-1;
        }
    }
    if(flag==false)
    {
        cout<<"Not Found";
    }
    return 0;
}