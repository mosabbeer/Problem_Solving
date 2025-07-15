#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n+1],countMin=0,countZero=0,countPlas=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        countMin++;
        else if(a[i]>0)
        countPlas++;
        else 
        countZero++;
        if(a[i]>0)
        sum=sum+(a[i]-1);
        else if(a[i]<0)
        {
            sum=sum-(a[i]+1);
        }
    }
    if(countMin%2==0)
    {
        sum=sum+countZero;
    }
    else
    {
        if(countZero>0)
        {
            sum=sum+countZero;
        }
        else
        sum=sum+2;
    }
    cout<<sum<<endl;
    return 0;
}