#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n],b[5]={0},i,sum=0,count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            b[a[i]%3]++;
        }
        if(sum%3==0)
        cout<<"0\n";
        else if(sum%3==1)
        {
            if(b[1]!=0)
            cout<<"1\n";
            else
            cout<<"2\n";

        }
        else
        {
            cout<<"1\n";
           
        }
    }
    return 0;
}