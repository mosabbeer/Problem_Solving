#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[1000],i=0,j;
        while(n>0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
        cout<<i<<endl;
        for(j=0;j<i;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}