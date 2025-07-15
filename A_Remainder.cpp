#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,x,y,count=0,i;
    cin>>n>>x>>y;
    string str;
    cin>>str;
    if(str[n-1-y]!='1')
    count++;
    i=n-1;
    while(x--)
    {
        if(i!=n-y-1)
        {
            if(str[i]=='1')
            count++;
        }
        i--;
    }
    cout<<count;
    return 0;
}