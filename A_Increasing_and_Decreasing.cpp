#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>x>>y>>n;
        int d,a[n+1],i,p=0,l;
        l=n;
        d=y-x;
       for(i=1;i<n;i++)
       p=p+i;
        if(d<p)
        cout<<"-1\n";
        else
        {
            a[1]=x;
            a[n]=y;
            l=n-2;
            d=d-p;
            a[2]=a[1]+d+l+1;
            l--;
            i=3;
            while(l>0)
            {
                a[i]=a[i-1]+l+1;
                i++;
                l--;
            }
            for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}