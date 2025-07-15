#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,a[30]={0},i,p=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<n;i++)
    {
        a[str[i]-97]++;
    }
        for(i=0;i<a[13];i++)
        cout<<"1 ";
    for(i=0;i<a[25];i++)
    cout<<"0 ";
    return 0;
}