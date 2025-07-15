#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0,i,p;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(p<0)
            p=-1*p;
            sum=sum+p;
        }
        cout<<sum<<endl;
    }
    return 0;
}