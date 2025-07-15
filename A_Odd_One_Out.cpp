#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[15]={0},p;
        int i;
        for(i=0;i<3;i++)
        {
            cin>>p;
            a[p]++;
        }
        for(i=0;i<10;i++)
        {
            if(a[i]==1)
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}