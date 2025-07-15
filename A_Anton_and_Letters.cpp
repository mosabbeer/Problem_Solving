#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    getline(cin,str);
<<<<<<< HEAD
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
=======
    int i,a[28]={0},count=0,n;
    n=str.size();
    for(i=1;i<n-1;i++)
    {
        a[str[i]-97]=1;
    }
    for(i=0;i<28;i++)
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    {
        if(a[i]==1)
        count++;
    }
    cout<<count;
<<<<<<< HEAD
    
  // cout<<str;
=======
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    return 0;
}