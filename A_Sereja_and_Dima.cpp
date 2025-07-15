#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,p;
    cin>>n;
    p=n;
    int a[n+1],i,j,k=1;
    for(i=1;i<=n;i++)
    cin>>a[i];
    ll srija=0,dima=0;
    i=1;
    j=n;
    while(p--)
    {
        if(k%2!=0)
        {
            if(a[j]>=a[i])
            {
                srija=srija+a[j];
                j--;
            }
            else
            {
                srija=srija+a[i];
                i++;
            }
        }
        else
        {
            if(a[j]>=a[i])
            {
                dima=dima+a[j];
                j--;
            }
            else
            {
                dima=dima+a[i];
                i++;
            }
        }

        k++;
    }
    cout<<srija<<" "<<dima;
    return 0;
}