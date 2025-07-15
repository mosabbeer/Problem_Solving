#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        count=count+n/15;
        n=n%15;
        if(n%6==0 && n%10!=0)
        {
            count=count+n/6;
            n=0;
        }
        else
        {
            count=count+n/10;
            n=n%10;
        }
        count=count+n/6;
        n=n%6;
        count=count+n/3;
        n=n%3;
        
        cout<< count+n <<endl;
    }
    return 0;
}