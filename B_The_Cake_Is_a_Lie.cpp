#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int num1,num2,num3,sum;
        cin>>num1>>num2>>num3;
        sum=num2-1;
        sum=sum+num2*(num1-1);
        if(sum==num3)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}