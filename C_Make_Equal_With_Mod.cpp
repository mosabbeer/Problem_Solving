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
        int a, count = 0, countE = 0, countO = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
                count++;
            if (a % 2 != 0)
                countO++;
        }
        if(count!=n && count>0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}