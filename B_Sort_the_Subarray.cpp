#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],b[n+1],i,p,l=1,r=1,count=1,max=0;
        for(i=1;i<=n;i++)
        cin>>a[i];
        cin>>b[1];
        for(i=2;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]>=b[i-1])
            {
                count++;
                p=i;
                if(count>max)
                {
                    l=p;
                    max=count;
                }

            }
            else
            {
            count=1;
            }
        }
        for(i=l;i>=2;i--)
        {
            if(b[i]<b[i-1])
            {
                r=i;
                break;
            }
        }
        cout<<r<<" "<<l<<endl;
    }
    return 0;
}