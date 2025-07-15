#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,p,q,i;
    cin>>n;
    cout<<"a";
    n--;
    p=n%4;
    q=n/4;
    while(q--)
    {
        cout<<"bbaa";
    }
    for(i=1;i<=p;i++)
    {
       cout<<"b";
       if(i==2)
       break;
    }
    p=p-2;
     for(i=1;i<=p;i++)
    {
       cout<<"a";
    }

    return 0;
}