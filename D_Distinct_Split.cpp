#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int a[28]={0},c0=0,cE=0,i,sum=0;
        for(i=0;i<n;i++)
        {
            a[str[i]-97]++;
        }
        for(i=0;i<27;i++)
        {
            if(a[i]>1)
            sum=sum+2;
            else
            sum=sum+a[i];
            if(a[i]==2)
            c0++;
            if(a[i]!=0)
            cE++;
        }
        if(c0==cE && cE!=1)
        cout<<sum-1<<endl;
        else
        cout<<sum<<endl;
        
    }
    return 0;
}