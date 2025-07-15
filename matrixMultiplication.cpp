#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[10][10][10];
    int i, j, k, l, temp, p;
    cin >> l;
    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= l; j++)
        {
            cin >> a[1][i][j];
        }
    }
    cout << endl;
    for (p = 2; p <= l; p++)
    {
        for (i = 1; i <= l; i++)
        {
            for (j = 1; j <= l; j++)
            {
                temp = 0;
                for (k = 1; k <= l; k++)
                {
                    temp = temp + a[1][i][k] * a[p - 1][k][j];
                }
                a[p][i][j] = temp;
            }
        }
    }
    for (p = 1; p <= l; p++)
    {
        for (i = 1; i <= l; i++)
        {
            for (j = 1; j <= l; j++)
            {
                cout << a[p][i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}