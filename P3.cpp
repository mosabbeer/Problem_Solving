#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string str;
       cin>>str;
       int i,count=0;
       for(i=0;i<n-2;i++) 
       {
        if(str[i]=='p')
        {
            if(str[i+1]=='i' && str[i+2]=='e')
            {
                str[i]='0';
                count++;
            }
        }
        else if(str[i]=='m')
        {
            if(str[i+1]=='a' && str[i+2]=='p')
            {
                str[i+2]='0';
                count++;
            }
        }
       }
       cout<<count<<endl;
    }
    return 0;
}