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
        ll a[n+1],i,count=1,count1=1,p;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            count++;
            else
            break;
        }
        for(i=n-2;i>=0;i--)
        {
            if(a[i]==a[i+1])
            count1++;
            else
            break;
        }
        if(a[0]==a[n-1])
        p=count+count1;
        else
        {
            if(count>count1)
            p=count;
            else
            p=count1;
        }
        if(p>n)
        cout<<"0\n";
        else
        cout<<n-p<<endl;

    }
    return 0;
}