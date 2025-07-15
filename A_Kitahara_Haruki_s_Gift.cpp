#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int a[n+1],count1=0,count2=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]/100;
        sum=sum+a[i];
        if(a[i]==1)
        count1++;
        else
        count2++;
    }
      //  cout<<" "<<count1<<" "<<count2<<" ";
    if(sum%2!=0)
    cout<<"NO";
  else if(count1%2==0 && count2%2==0)
   cout<<"YES\n";
   else
   {
    if(count1>0)
    cout<<"YES";
    else
    {
        if(count2%2==0)
        cout<<"YES";
        else
        cout<<"NO";
    }
   }

    return 0;
}