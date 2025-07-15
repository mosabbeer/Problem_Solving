#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll product=1;
        int array[n+1],i;
        for(i=0;i<n;i++)
        {
            cin>>array[i];
            product=product*array[i];
        }
        if(2023%product!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<2023/product;
            k--;
            for(i=0;i<k;i++)
            {
                cout<<" 1";
            }
            cout<<endl;
        }
    }
    return 0;
}