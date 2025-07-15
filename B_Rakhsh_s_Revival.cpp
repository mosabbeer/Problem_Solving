#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string str;
        cin >> str;
        int i, j, count = 0, sum = 0, l = 0;
        for (i = 0; i < n; i++)
        {
            count = 0;
            l = 0;
            if (str[i] == '0')
            {
                count++;
                if (count == m)
                {
                    sum++;
                    l = 1;
                    if (i + k - 1 < n)
                        str[i + k - 1] = '1';
                    i = i + k;
                }
                if (l == 0)
                {
                    for (j = i + 1; j < n; j++)
                    {
                        if (str[j] == '0')
                            count++;
                        if (count == m)
                        {
                            l = 1;
                            sum++;
                            if (j + k - 1 < n)
                                str[j + k - 1] = '1';
                            i = j + k;
                            break;
                        }
                        if (str[j] == '1')
                        {
                            i = j;
                            break;
                        }
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}