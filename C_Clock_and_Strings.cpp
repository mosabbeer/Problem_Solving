#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,temp,p=0,q=0,i;
        cin>>a>>b>>c>>d;
        if(b>a)
        {
            temp=b;
            b=a;
            a=temp;
        }
        for(i=b;i<=a;i++)
        {
            if(i==c || i==d)
            {
                p=1;
                q++;
            }
        }
        if(p==0 || q==2)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";


    }
    return 0;
}