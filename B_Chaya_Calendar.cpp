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
        ll a[n + 1], i, x, p, q;
        for (i = 0; i < n; i++)
            cin >> a[i];
        x = a[0] + 1;
        // cout<<x<<endl;
        for (i = 1; i < n ; i++)
        {
            if (x% a[i]==0)
            {
                x = x + 1;
            }
            else
            {
                if (x<a[i])
                {
                    x = a[i] + 1;
                }
                else
                {
                    x=((x/a[i])+1)*a[i]+1;
                }
            }
            // cout<<x<<endl;
        }
       
  
        cout << x-1 << endl;
    }
    return 0;
}