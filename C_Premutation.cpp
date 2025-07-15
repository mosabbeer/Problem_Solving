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
        int arr[n + 1] = {0}, mat[n + 1][n], i, j, p, k;
        int a[n + 1] = {0};
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            a[mat[i][0]]++;
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                p = i;
                break;
            }
        }
        for (i = n; i > 0; i--)
        {
            if (a[i] > 0)
            {
                k = i;
                break;
            }
        }
        if (a[p] > a[k])
        {
            cout << p << " " << k << " ";
        }
        else
            cout << k << " " << p << " ";
        arr[k] = 1;
        arr[p] = 1;
        j = 0;
        while ((j < n - 1))
        {
            for (i = 0; i < n; i++)
            {
                if (arr[mat[i][j]] == 0)
                {
                    cout << mat[i][j] << " ";
                    arr[mat[i][j]]++;
                }
                
            }
            j++;
        }
        cout << endl;
    }
    return 0;
}