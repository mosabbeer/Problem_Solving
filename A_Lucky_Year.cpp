#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,sum=0,q,count=0,n1,s;
    cin>>n;
    if(n<10)
    cout<<"1\n";
    else{
        q=n;
        while(q>9){
            q=q/10;
            count++;
        }
        s=pow(10,count);
            n1=(q+1)*s;
            sum=n1-n;
        cout<<sum<<endl<<s;
    }
    return 0;
}