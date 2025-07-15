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
        int a[n + 1], i, b[n + 1];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
       sort(b,b+n);
       if(a[n-1]==b[n-1])
       {
        cout<<b[n-2]<<endl;
       }
       else
       cout<<b[n-1]<<endl;
    }
    return 0;
}