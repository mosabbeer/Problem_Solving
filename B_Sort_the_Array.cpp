#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int a[n+1],b[n+1],i,p,count=0,d,s=0;
    cin>>a[0];
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
        {
            p=i;
            count++;
        }
        b[i]=a[i];
    }
    if(count==0)
    {
        cout<<"yes\n1 1";
    }
    else
    {
        d=p;
        reverse(a+d-count,a+d+1);
        sort(b,b+n);
        s=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                s=1;
                break;
            }
           // cout<<a[i]<<" ";
           // cout<<b[i]<<" ";
        }
        if(s==1)
        {
            cout<<"no\n";
        }
        else
        {
            cout<<"yes\n"<<p-count+1<<" "<<p+1;
        }
       // cout<<p<<" "<<count;
    }
    return 0;
}