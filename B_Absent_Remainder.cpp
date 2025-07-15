#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int  b[1000001] = {0};
        int n;
        cin >> n;
        int a[n + 1], i, j, count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (b[a[j] % a[i]] == 0)
                {
                    cout << a[j] << " " << a[i]<<endl;
                    count++;
                }
                if (count == n / 2)
                    break;
            }
            if (count == n / 2)
                break;
        }
       
    }
    return 0;
}