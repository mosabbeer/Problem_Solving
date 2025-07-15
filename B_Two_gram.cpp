#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,i,j,count=1,max=-1;
    cin>>n;
    string str,p,q,l,r;
    cin>>str;
   // cout<<max;
    for(i=0;i<n;i++)
    {
        p=str[i];
        q=str[i+1];
        for(j=i+1;j<str.length()-1;j++)
        {
            if(str[j]==p[0] && str[j+1]==q[0])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            l[0]=p[0];
            r[0]=q[0];
        }
        count=1;
    }
    cout<<l[0]<<r[0];
    return 0;
}