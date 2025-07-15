#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 2], sum, max = 0, i, p, b[n + 2];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            if (a[i] > max)
                max = a[i];
        }
       
        for (i = n; i>0; i--)
        {
          b[i]=a[i];
          p=a[i]+i;
          if(p<=n) 
          {
            b[i]=b[i]+b[p];
          }
            
        }
        for(i=1;i<=n;i++)
        {
            if(b[i]>max)
            max=b[i];
           // cout<<b[i]<<" ";
        }
        cout << max << endl;
    }
    return 0;
}