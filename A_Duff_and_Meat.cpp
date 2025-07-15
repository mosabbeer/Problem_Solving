#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n + 1], p[n + 1], i, sum = 0, min = 340, l;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i] >> p[i];
        if (p[i] < min)
        {
            min = p[i];
            l = i;
        }
    }
    sum = sum + a[1] * p[1];
    if (n > 1 )
    {
        for (i = 2; i < l; i++)
        {
            if (p[i] > p[i - 1])
                sum = sum + p[i - 1] * a[i];
            else
                sum = sum + p[i] * a[i];
        }
        for (i = l; i <= n; i++)
        {
            sum = sum + a[i] * min;
        }
        if(l==1)
        sum=sum-a[1]*p[1];
    }
    cout << sum;
    return 0;
}