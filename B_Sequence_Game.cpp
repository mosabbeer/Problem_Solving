#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;
        int a[n + 1], i, m;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==1)
            count++;
        }
        cout<<n+(n-count)<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            cout<<a[i]<<" ";
            else
            cout<<a[i]<<" 1 ";
        }
        cout << endl;
    }
    return 0;
}