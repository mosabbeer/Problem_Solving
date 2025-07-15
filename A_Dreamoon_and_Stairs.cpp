#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,l,result=0;
    cin>>n>>l;
    if(l>n)
    cout<<"-1";
    else
    {
    if(n%2==0)
    result =n/2;
    else
    result= n/2+1;
    if(result%l==0)
    cout<<result;
    else
    {
        int p =result%l;
        p=l-p;
        cout<<result+p;
    }
    }
    return 0;
}