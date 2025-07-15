#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    getline(cin,str);
    int count,a[30]={0},i=0,j;
    while(str[i]!='}')
    {
        if(str[i]>=97 && str[i]<=123)
        {
            a[str[i]-97]=1;
        
        }
        j++;
        i++;
    }
    for(i=0;i<=27;i++)
    {
        if(a[i]==1)
        count++;
    }
    cout<<count;
    
  // cout<<str;
    return 0;
}