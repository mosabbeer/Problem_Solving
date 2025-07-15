#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, i;
    cin >> n >> m;
    int a[n + 5], max, min, sum;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    max = a[n - 1] + m;
    for (i = 0; i < n - 1; i++)
    {
        sum = a[n - 1] - a[i];
        m = m - sum;
        if (sum <= 0)
            break;
    }
    if (m > 0){
        if(m%n==0)
        min = a[n - 1] + m/n;
        else
        min=a[n-1]+m/n+1;
    }
    else
        min = a[n - 1];
    cout << min<<" " << max;
    return 0;
}