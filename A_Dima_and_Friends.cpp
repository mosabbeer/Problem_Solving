#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,sum=0,p,i,div=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        sum=sum+p;
    }
    n++;
    div=sum/n+1;
    cout<<n*div-sum;
    return 0;
}