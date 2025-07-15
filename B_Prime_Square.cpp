#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    int a[1000000]={1},i,j;
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=100;j++)
        {
            a[i*j]=0;
        }
    }
    for(i=1;i<=15;i++)
    cout<<a[i]<<" ";
   /* cin>>t;
    while(t--){
        int n;
       int i=0,j=0;
        cin>>n;
        int b[n+1][n+1],p;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                b[i][j]=1;
            }
        }
       /* for(i=n;i<1000;i++)
        {
            if(a[i]==1)
            {
                p=a[i]-n-1;
            }
            if(a[p]==0)
            break;
        }
        for(i=1;i<=n;i++)
        {
            b[n][i]=p;
            b[i][n]=p;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }*/
    return 0;
}