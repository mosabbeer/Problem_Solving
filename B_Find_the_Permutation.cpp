#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str[n];
        int i,j,a[n];
        for(i=0;i<n;i++)
        cin>>str[i];
        for(i=0;i<n;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                
                if(str[i][j]=='1')
                {
                    if(i>j)
                    count++;
                }
                else
                {
                    if(i<j)
                    count++;
                }
            }
            a[count]=i+1;
            count=0;
        }
        for(i=0;i<n;i++)
        cout<<a[i]<< " ";
        cout<<endl;
    }
    return 0;
}