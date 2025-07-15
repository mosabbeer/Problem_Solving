#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    getline(cin,str);
    int i,a[28]={0},count=0,n;
    n=str.size();
    for(i=1;i<n-1;i++)
    {
        a[str[i]-97]=1;
    }
    for(i=0;i<28;i++)
    {
        if(a[i]==1)
        count++;
    }
    cout<<count;
    return 0;
}