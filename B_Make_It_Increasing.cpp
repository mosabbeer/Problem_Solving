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
        ll a[n + 1], i, count = 0;
        if(n==1)
        cout<<"0\n";
   
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
          cout<<"0\n";
        }
        else
        {
            for (i = n - 1; i >= 1; i--)
            {
                if (a[i] >= a[i + 1] && a[i] == 0)
                {
                    cout<<"-1\n";
                    break;
                }
                while (a[i] >= a[i + 1])
                {
                    a[i] = a[i] / 2;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}