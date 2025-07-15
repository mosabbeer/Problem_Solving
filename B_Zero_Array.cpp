#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
<<<<<<< HEAD
    int n;
    cin >> n;
    ll sum = 0, p = 0, i, a[n + 1], q = n - 1;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        q = n - 1;
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (a[i] < a[q])
            {
                a[q] = a[q] - a[i];
                a[i] = 0;
            }
            else
            {
                a[i] = a[i] - a[q];
                a[q] = 0;
            }
            if (a[q] == 0 && q>0)
                q--;
          /* */
        }
         for (i = 0; i < n; i++)
            {
                if (a[i] == 0)
                    p++;
               // cout << a[i] << " ";
            }
           // cout << " " << q;
        if (p == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO";
=======

    int n;
    cin >> n;
    ll a[n + 1], i, sum = 0, max = -5, sum2 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
        if (a[i] > max)
            max = a[i];
    }
    sum2 = sum - max;
    if (sum % 2 == 0 && sum2 >= max)
        cout << "YES\n";
    else
        cout << "NO\n";
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    return 0;
}