#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        if(n%3==2)
        {
            for(i=1;i<=n;i++)
            cout<<i<<" ";
        }
        else if(n%3==1)
        {
            cout<<"2 1 ";
            for(i=3;i<=n;i++)
             cout<<i<<" ";
        }
        else
        {
            cout<<"2 1 4 3 ";
            for(i=5;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}