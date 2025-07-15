#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a[2],count=0,mod1=0,mod2=0;
    cin>>a[0]>>a[1];
    sort(a,a+2);
    count=(a[0]/5)*a[1];
    mod1=a[0]%5;
    mod2=a[1]%5;
    count=count+mod1*(a[1]/5);
    int i,j;
    for(i=1;i<=mod1;i++)
    {
        for(j=1;j<=mod2;j++)
        {
            if((i+j)%5==0)
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}