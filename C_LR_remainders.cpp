#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        ll max = 1, bi = 1, a[n + 1], p = 0, q = n - 1, g, x, count = 0, l;
        for (i = 0; i < n; i++)
        {
            cin >> g;
            a[i] = g % k;
            if (a[i] == 0)
            {
                a[i] = 0;
                count++;
            }
        }
        string str;
        cin >> str;
        if (count != 0)
        {
            cout << "0 ";
            for (i = 0; i < n - 1; i++)
            {
                if (str[i] == 'L')
                {
                    x=p;
                    p++;
                }
                else
                {
                    x=q;
                        q--;
                }
                if (a[x] == 0)
                    count--;
                cout << "0 ";
                if (count == 0)
                    break;
            }
        }
        if(count==0)
        {
            for (i = p; i <= q; i++)
                max =( max * a[i]);
                cout<<max%k<<" ";
            for (i = 0; i < n - 1; i++)
            {
                
                if (str[i] == 'L')
                {
                    x = p;
                    p++;
                }
                else
                {
                    x = q;
                    q--;
                }
                bi=a[x];
                max=max/bi;
                cout<<max%k<<" ";
            }
        }
        cout << "\n";
    }
        return 0;
}
    