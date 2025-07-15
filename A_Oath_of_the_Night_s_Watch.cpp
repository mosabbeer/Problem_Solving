#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n + 1], i, count = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[0])
        count++;
        else if(a[i]==a[n-1])
        count++;
    }
    cout << n-count;
    return 0;
}