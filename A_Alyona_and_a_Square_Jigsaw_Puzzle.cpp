#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,a[n+1];
        for(i=0;i<n;i++)
        cin>>a[i];
       if(n>81)
       cout<<"6\n";
       else if(n>49)
       cout<<"5\n";
        else if(n>25)
       cout<<"4\n";
        else if(n>9)
       cout<<"3\n";
        else if(n>1)
       cout<<"2\n";
        else if(n==1)
       cout<<"1\n";
    }
    return 0;
}