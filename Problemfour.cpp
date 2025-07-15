#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    n=2*n;
    ll a[n + 1], i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout <<a[n/2-1]-a[0]+a[n-1]-a[n/2]<<endl;
    for (i = 0; i <n/2; i++)
    {
        cout << a[i] << " " << a[(n/2)+i] << endl;
    }
    return 0;
}