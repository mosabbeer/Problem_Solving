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
        ll a[n + 1], i, sum = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum=sum+a[i];
            if(sum<0)
            sum=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}