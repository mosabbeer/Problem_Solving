#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b,x,p;
        cin>>n>>a>>b;
        x=b-a;
        if(a>=b)
        {
            cout<<a*n<<endl;
        }
        else
        {
          if(x>=n)
          {
            a=b-n;
            a=a*(a+1)/2;
            b=b*(b+1)/2;
            cout<<b-a<<endl;
          }
          else
          {
            p=b*(b+1)/2-(a*(a+1))/2;
            n=n-x;
            cout<<p+n*a<<endl;
          }
        }
    }
    return 0;
}