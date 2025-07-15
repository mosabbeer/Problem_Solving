#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,a,b,c,temp;
    cin>>n;
    temp=n/3;
    if(temp%3!=0)
    a=temp;
    else
    a=temp+1;
    n=n-a;
    b=1;
    c=n-b;
    if(c%3==0){
        b++;
        c--;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}