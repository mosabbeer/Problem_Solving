#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, i;
        cin >> n >> k >> x;
        if (x == k && k == 1)
            cout << "NO\n";
        else if (x != 1)
        {
            cout << "YES\n";
            cout << n << endl;
            for (i = 0; i < n; i++)
                cout << "1 ";
            cout << endl;
        }
        else
        {
            int p;
            p = n % k;
            if (p == 0)
            {
                cout << "YES\n";
                cout << n / k << endl;
                for (i = 0; i < n / k; i++)
                    cout << k << " ";
                cout << endl;
            }
            else if (p != 1)
            {
                cout << "YES\n";
                cout << n / k + 1 << endl;
                for (i = 0; i < n / k; i++)
                    cout << k << " ";
                cout << p << endl;
            }
            else
            {
                if (k == 2 && n % 2 != 0)
                    cout << "NO\n";
                else
                {
                    cout << "YES\n";
                    cout << n/k + 1 << endl;
                    for(i=0;i<n/k-1;i++)
                    cout<<k<<" ";
                    k=k+p;
                    cout<<k/2<<" "<<k/2+1<<endl;
                }
            }
        }
    }
    return 0;
}