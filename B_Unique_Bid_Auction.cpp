#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],f[n+1],i,min=9999999,max=-1,l=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
          f[i]=a[i];
        }
        sort(f,f+n);
        if(f[0]!=f[1])
        {
            l=f[0];
        }
        if(l==-1)
        {
            for(i=1;i<n-1;i++)
            {
                if(f[i]!=f[i-1] && f[i]!=f[i+1])
                {
                    l=f[i];
                    break;
                }
            }
        }
        if(l==-1)
        {
            if(f[n-2]!=f[n-1])
            {
                l=f[n-1];
            }
        }
        if(l==-1)
        cout<<"-1\n";
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==l)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}