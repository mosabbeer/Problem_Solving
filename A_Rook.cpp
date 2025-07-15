#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string str,str1="abcdefgh";
        int i;
        cin>>str;
        for(i=1;i<=8;i++)
        {
            if((str[1]-48)!=i)
            {
                cout<<str[0]<<i<<endl;
            }
        }
       for(i=0;i<8;i++)
       {
        if((str[0])!=str1[i])
        {
           cout<<str1[i]<<str[1]<<endl;
           
        }
       }
    }
    return 0;
}