#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],c1=0,c0=0,i,sum=0,count=0;
        for(i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<0)
            c0++;
            else
            c1++;
            sum=sum+a[i];
        }
        if(sum<0)
        {
            
            count=c0-n/2;
            if((c0-count)%2!=0)
            count++;
        }
        else{
            if(c0%2!=0)
            count=1;
        }
        cout<<count<<endl;

    }
    return 0;
}