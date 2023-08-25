#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int nums[N];

void merge(int l,int r,int mid)
{
    int left_size=mid-l+1;
    int right_size=r-mid;
    int L[left_size+1];
    int R[right_size+1];

    for(int i=l,j=0;i<=mid;i++,j++)
    {
        L[j]=nums[i];
    }
    for(int i=mid+1,j=0;i<=r;i++,j++)
    {
        R[j]=nums[i];
    }

    R[right_size]=INT_MIN;
    L[left_size]=INT_MIN;

    int lp=0,rp=0;
    for(int i=l;i<=r;i++)
    {
        if(L[lp] <= R[rp])
        {
            nums[i]=R[rp];
            rp++;
        }
        else
        {
            nums[i]=L[lp];
            lp++;
        }
    }

}
void merge_sort(int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(l,mid);
        merge_sort(mid+1,r);
        merge(l,r,mid);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    merge_sort(0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}