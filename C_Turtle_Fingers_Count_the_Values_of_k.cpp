#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,l;
        cin>>a>>b>>l;
        ll c[2000]={0},count=0,d,n,i,j;
        for(i=0;i<=1000;i++)
        {
           c[i]= (pow(a,i)+.001);
           if(c[i]>l)
           break;
        }
        d=i;
        set<int>s;
        for(i=0;i<=d;i++)
        {
            for(j=0;j<1000;j++)
            {
                n=(pow(b,j)+.001);
                if(l%(c[i]*n)==0)
                {
                   s.insert(l/(n*c[i])) ;
                }
                 if((n*c[i])>l)
                break;
            }
        }
      
        cout<<s.size()<<endl;
    }
    return 0;
}