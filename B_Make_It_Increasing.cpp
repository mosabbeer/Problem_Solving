#include<bits/stdc++.h>
using namespace std;
#define ll long long
int calc(int x)
{
    int l=1,i;
    for(i=1;i<=1000;i++)
    {
        l=l*2;
        if(l>x)
        break;
    }
    return i;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int a[n+1],i,count=0,p;
         cin>>a[0];
         for( i=1;i<n;i++)
         {
            cin>>a[i];
            if(a[i]>a[i-1])
            count++;
         }
         if(count==n-1)
         cout<<"0\n";
         else
         {
            count=0;
            for(i=n-2;i>=0;i--)
            {
                if(a[i+1]<=a[i])
                {
                    p=calc(a[i]/a[i+1]);
                }
                count=count+p;
                a[i]=a[i]/(pow(2,p));
                if(a[i]==0 && i!=0)
                {
                    count=-1;
                    break;
                }
            }
            cout<<count<<endl;
         }
    }
    return 0;
}