#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,p,d,i,l;
        cin>>n;
        while(n>1)
        {
            d=0;
           p=sqrt(n);
           if(p!=1)
           {
           for(i=p;i>=2;i--)
           {
            if(n%i==0)
            {
                count++;
               n=n-l;
               break;
            }
            else
            d++;
           }
           if(d==p)
           break; 
           }
           else
           break;
        }
        if(count%2==0)
        cout<<"Bob\n";
        else
        cout<<"Alice\n";
       // cout<<count;
    }
    return 0;
}