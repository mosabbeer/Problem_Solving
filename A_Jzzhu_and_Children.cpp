#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n + 1], count = 0, i, max = -9, j;
    for (i = 1; i <= n; i++)
    {
        cin >> array[i];
        if (array[i] > max)
            max = array[i];
    }
    if (n == 1)
        cout << "1";
    else
    {
        for (j = 0; j <= max; j++)
        {
            for (i = 1; i <= n; i++)
            {
                if (array[i] <= m)
                {
                    if (array[i] != 0)
                        count++;
                    if (array[i] != 0)
                        array[i] = 0;
                }
                else
                {
                    if (array[i] != 0)
                        array[i] = array[i] - m;
                }
                if (count == n - 1)
                    break;
            }
            if (count == n - 1)
                break;
        }
        for (i = 1; i <= n; i++)
        {
            if (array[i] > 0)
                break;
        }
        cout << i;
    }

    return 0;
}