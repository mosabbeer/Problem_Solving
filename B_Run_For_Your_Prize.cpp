#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n+1],i,sum=0,position, p;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>500000)
        {
            position =i;
            break;
        }
        else
            position=n;
    }
    if(position ==n)
        sum=a[n-1]-1;
    else if(position ==0)
    {
        sum=1000000-a[0];
    }
    else
    {
        sum=a[position -1]-1;

            p= 1000000-a[position ];
        if(sum<p)
            sum=p;
    }
    cout <<sum << endl;
}