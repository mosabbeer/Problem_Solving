#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=1,count=1;
        if(n<=4)
        {
            if(n==1)
            cout<<"1\n";
            else
            cout<<"2\n";
        }
        else
        {
            while(1)
            {
                sum++;
                count++;
                sum=sum*2;
                if(sum>=n)
                break;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}