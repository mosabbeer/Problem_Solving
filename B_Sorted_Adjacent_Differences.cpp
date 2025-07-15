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
        int a[n + 1], b[n + 1], p, countPossitive = 0, countNegative = 0, i, j = 0, k = 0;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            if (p >= 0)
            {
                countPossitive++;
                a[j] = p;
                j++;
            }
            else
            {
                countNegative++;
                b[k] = p;
                k++;
            }
        }
        sort(a, a + countPossitive);
        sort(b, b + countNegative);
        reverse(b, b + countNegative);
        if (countPossitive == 0)
        {
            for (i = 0; i < countNegative; i++)
                cout << b[i] << " ";
        }
        else if (countNegative == 0)
        {
            for (i = 0; i < countPossitive; i++)
                cout << a[i] << " ";
        }
        else
        {
            i = j = k = 0;
            if (countPossitive >= countNegative)
            {
                p = countPossitive - countNegative;
                while (p--)
                {
                    cout << a[i] << " ";
                    i++;
                }
                j =p= 0;
                countNegative = 2 * countNegative;
                while (countNegative--)
                {
                    if (p % 2 == 0)
                    {
                        cout << b[j] << " ";
                        j++;
                    }
                    else
                    {
                        cout << a[i] << " ";
                        i++;
                    }
                    p++;
                }
            }
            else
            {
                j =p= 0;
                p = countNegative - countPossitive;
                while (p--)
                {
                    cout << b[i] << " ";
                    i++;
                }
                p=0;
                countPossitive = 2 * countPossitive;
                while (countPossitive--)
                {
                    if (p % 2 == 0)
                    {
                        cout << a[j] << " ";
                        j++;
                    }
                    else
                    {
                        cout << b[i] << " ";
                        i++;
                    }
                    p++;
                }
            }
        }
       
        cout << endl;
    }
    return 0;
}