#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int posA=-1,posB=-1,i;
        for(i=0;i<n;i++)
        {
            if(str[i]=='A')
            {
                posA=i;
                break;
            }
        }
         for(i=n-1;i>=0;i--)
        {
            if(str[i]=='B')
            {
                posB=i;
                break;
            }
        }
        if(posA==-1 || posB==-1||(posA>posB))
        cout<<"0\n";
        else
        cout<<posB-posA<<endl;
    }
    return 0;
}