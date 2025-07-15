#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin>>str;
    int n,sum=0,i;
    n=str.length();
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        sum++;
    }
    if(n%2==0)
    {
        if(sum==1)
        {
        cout<<"YES\n";
       
        }
        else
        cout<<"NO";
    }
    else
    {
        if(sum<=1)
        cout<<"YES";
        else
        cout<<"NO";
    }
    // cout<<sum;
    return 0;
}