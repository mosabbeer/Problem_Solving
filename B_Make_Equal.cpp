#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],sum=0,avg=0,i,p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=sum/n;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=avg)
            {
                sum=sum+a[i]-avg;
                a[i]=avg;
            }
            else
            {
                sum=sum-(avg-a[i]);
            }
            if(sum<0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";
    }
    return 0;
}