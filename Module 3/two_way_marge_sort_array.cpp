#include<bits/stdc++.h>
using namespace std;
void margesortedarray(int ar1[],int ar2[],int size1,int size2,int margesort[])
{
    int i=0; //index ar1;
    int j=0; //index ar2;
    int k=0; //index margesort2;
    while(i<size1 && j<size2)
    {
        //if(ar1[i] >= ar2[j]) // array sorted hote hobe choto teke boro ta hole choto teke boro paoa jabe
        if(ar1[i] <= ar2[j]) // array sorted hote hobe boro teke choto ta hole boro teke choto paoa jabe
        {
            margesort[k]=ar2[j];
            j++;
        }
        else 
        {
            margesort[k]=ar1[i];
            i++;
        }
        k++;
    }
    while(i<size1)
    {
        margesort[k]=ar1[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        margesort[k]=ar2[j];
        k++;
        j++;
    }
}
int main()
{
    int a;
    cin>>a;
    int ar1[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar1[i];
    }

    int b;
    cin>>b;
    int ar2[b];
    for(int i=0;i<b;i++)
    {
        cin>>ar2[i];
    }

    int ar1_size=sizeof(ar1)/sizeof(0);
    int ar2_size=sizeof(ar2)/sizeof(0);
    
    int margesize=ar1_size+ar2_size;
    int margesort[margesize];

    margesortedarray(ar1,ar2,ar1_size,ar2_size,margesort);

    for(int i=0;i<margesize;i++)
    {
        cout<<margesort[i]<<" ";
    }

   
    return 0;
}