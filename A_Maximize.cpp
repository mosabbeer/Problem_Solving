#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,max=0,i,q;
        cin>>x;
        for(i=1;i<x;i++)
        {
            y=__gcd(i,x)+i;
            if(y>max)
            {
                max=i;
                q=i;
            }
        }
        cout<<q<<endl;
    }
    return 0;
}