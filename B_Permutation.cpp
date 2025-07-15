#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n;
    cin >> n;
    int a[5000 + 10]={0}, p, i, count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> p;
        a[p] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            count++;
    }
    cout <<  n-count;
    return 0;
}