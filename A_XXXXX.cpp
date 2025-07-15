#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        ll a[n+1],sum=0,i,positionfromfirst,modolo=0,positonfromlast=0,position;
        for(i=1;i<=n;i++){
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]%x!=0)
            modolo++;
        }
        if(sum%x!=0)
        cout<<n;
        else if(modolo==0)
        cout<<"-1";
        else{
            for(i=1;i<=n;i++){
                if(a[i]%x!=0)
                break;
            }
            positionfromfirst=i;
            for(i=n;i>0;i--){
                positonfromlast++;
                if(a[i]%x!=0)
                break;
            }
            if(positionfromfirst<=positonfromlast){
                position=positionfromfirst;
            }
            else{
                position=positonfromlast;
            }
            cout<<n-position;
        }
        cout<<endl;
    }
    return 0;
}