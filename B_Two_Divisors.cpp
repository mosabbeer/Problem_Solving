#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        long long n,k,i,l;
        cin>>n>>k;
        int  p;
        p=__gcd(n,k);
        l=(n*k)/p;
        if(l==k)
        l=l*k/n;
        cout<<l<<endl;
      
    }
}