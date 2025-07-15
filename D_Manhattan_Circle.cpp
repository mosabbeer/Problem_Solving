#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,m,count=0,i,j,p=-1,a;
    cin>>n>>m;
    string str[n+1];
    for(i=0;i<n;i++)
    cin>>str[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i][j]=='#')
            {
                count++;
                break;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i][j]=='#')
            {
                p=i;
                break;
            }
        }
        if(p>-1)
        break;
    }
   
    a=p+count/2;
    count=0;
    p=-1;
    for(j=m;j>=0;j--)
    {
        if(str[a][j]=='#')
        {
            count++;
            p=j;
        }
    }
    p=p+count/2;
     cout<<a+1<<" "<<p+1<<endl;
 }
    return 0;
}