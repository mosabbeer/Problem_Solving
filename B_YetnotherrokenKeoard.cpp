#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>str;
        n=str.length();
        int a[n+1],b[n+1],i,j,l=0,s=0;
        for(i=0;i<n;i++)
        {
            if(str[i]!='b' || str[i]!='B')
            {
                if(str[i]>=97)
                {
                    a[s]=i;
                    s++;
                }
                else
                {
                    a[l]=i;
                    l++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(str[i]=='b')
            {
                
            }
        }
    }
    return 0;
}