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
        int p, a[n + 1] = {0}, i;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            a[p]++;
            if(a[p]==1)
            cout<<p<<" ";
        }
        for (i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}