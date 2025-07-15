#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a[10],i,d,b,c=-3,s;
        for(i=1;i<=7;i++)
        {
            cin>>a[i];
        }
        b=a[1];
        for(i=2;i<7;i++)
        {
            s=a[i]-a[1];
            for(int j=2;j<7;j++)
            {
                if(s==a[j])
                {
                    c=a[j];
                    break;
                }
            }
            if(c>=0)
            break;
        }
        d=a[7]-b-c;
        cout<<b<<" "<<c<<" "<<d<<endl;
    }
    return 0;
}