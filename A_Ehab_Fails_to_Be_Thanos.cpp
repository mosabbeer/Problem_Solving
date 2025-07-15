#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        int n;
        cin>>n;
        ll a[2*n+1],i,count=0;
        cin>>a[0];
        for(i=1;i<=2*n-1;i++)
        {
            cin>>a[i];
            if(a[i]==a[0])
            count++;
        }
         sort(a,a+2*n);
        if(count==(2*n-1))
        cout<<"-1";
        else
        {
           
            for(i=0;i<=2*n-1;i++)
            {
            cout<<a[i]<<" ";
            }        
        }
    return 0;
}