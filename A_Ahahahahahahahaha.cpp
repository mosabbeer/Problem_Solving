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
        int a[n + 1], i, cO = 0, cE = 0,p=0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1 && i % 2 == 0)
                cE++;
            else if (a[i] == 1 && i % 2 != 0)
                cO++;
        }
         //cout<<cO<<cE<<endl;
        if (cE == cO)
        {
            cout << n << endl;
            for (i = 1; i <= n; i++)
            {
                    cout << a[i] << " ";
            }
            cout << endl;
        }
       else if ((cE + cO) <= n / 2)
        {
            cout << n - cE - cO << endl;
            for (i = 1; i <= n; i++)
            {
                if (a[i] != 1)
                    cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            if(cE>cO)
            {
                for(i=1;i<=n;i++)
                {

                }
            }
        }
    }
    return 0;
}