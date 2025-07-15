#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1];
        ll suma=0,sumb=0,mina=200000000000,minb=20000000000,i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            suma=suma+a[i];
            if(a[i]<mina)
            mina=a[i];
        }
         for(i=0;i<n;i++)
        {
            cin>>b[i];
            sumb=sumb+b[i];
            if(b[i]<minb)
            minb=b[i];
        }
        suma=suma+n*minb;
        sumb=sumb+n*mina;
        cout<<min(suma,sumb)<<endl;
    }
    return 0;
}