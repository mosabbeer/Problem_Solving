#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,p=-1,q=-1;
        cin>>n;
        string str[n+1];
        for(i=0;i<n;i++)
        cin>>str[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='1')
                {
                    p=i;
                    q=j;
                    break;
                }
            }
            if(q>=0)
            break;
        }
        if(str[p+1][q]=='1' && str[p][q+1]=='1')
        cout<<"SQUARE\n";
        else
        cout<<"TRIANGLE\n";
    }
    return 0;
}