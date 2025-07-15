#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,p=0;
        cin>>a>>b>>c>>d;
        if(a==c)
        {
         if(b+d==c)
            p=1;
        }
        else if(a==d)
        {
            if(b+c==a)
            p=1;
        }
        else if(b==c)
        {
            if(a+d==c)
            p=1;
        }
        else if(b==d)
        {
            if(a+c==d)
            p=1;
        }
        if(p==1)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    return 0;
}