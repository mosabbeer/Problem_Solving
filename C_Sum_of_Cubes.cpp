#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a,max,i,sum,p,l=0;
        for(i=1;i<10000;i++)
        {
            a=i*i*i;
            sum=n-a;
            if(sum<=0)
            break;
            p=cbrt(sum);
            if(a+p*p*p==n)
            {
                l=1;
                break;
            }
        }
        if(l==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}