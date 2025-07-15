#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k, i, j;
    cin >> n >> k;
    ll a[n + 1], b[n + 1] ={0},sum = 0, x, y, p;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    reverse(a, a + n);
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        b[i] = sum;
    }
   while (k--)
    {
        cin >> x >> y;
        y=x-y;
        if(y==0)
        y=n+1;
        cout << b[x-1]-b[y-1] << endl;
    }
   /* for(i=0;i<n;i++)
    cout<<b[i]<<" ";*/
    return 0;
}