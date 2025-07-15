#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,i;
        cin>>n;
        ll a[10]={0},count=0,sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>p;
            a[p%3+1]++;
        }
          p=n/3;
        for(i=1;i<4;i++)
        {
            a[i]=a[i]-p;
           // cout<<a[i]<<" ";
        }
        a[0]=a[3];
        a[4]=a[1];
        for(i=1;i<=3;i++)
        {
            if(a[i]<0)
            {
                count++;
            }
        }
        if(count==1)
        {
            for(i=1;i<=3;i++)
            {
                if(a[i]<0)
                {
                   sum=a[i+1]*2+a[i-1];
                }
            }
        }
        else
        {
            for(i=1;i<=3;i++)
            {
                if(a[i]>0)
                {
                   sum=-1*(a[i+1]+a[i-1]*2);
                }
            }
        }
        cout<<sum<<endl;
      
    }
    return 0;
}