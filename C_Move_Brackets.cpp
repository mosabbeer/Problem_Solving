#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,count=0,j;
        string str;
        cin>> str;
        for(i=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                for(j=i+1;j<n;j++)
                {
                    if(str[j]==')')
                    {
                        str[i]='*';
                        str[j]='*';
                        break;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(str[i]!='*')
            count++;
        }
        cout<<count/2<<endl;
       // cout<<str<<endl;
    }
    return 0;
}