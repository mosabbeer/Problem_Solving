#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[300]={0},i,one=0,two=0,p;
        for(i=0;i<n;i++)
        {
            cin>>p;
            a[p]++;
        }
        for(i=0;i<=100;i++)
        {
            if(a[i]==0)
            {
                one=i;
                break;
            }
        }
        for(i=0;i<=100;i++)
        {
            if(a[i]<2)
            {
                two=i;
                break;
            }
        }
        cout<<one+two<<endl;
    }
    return 0;
}