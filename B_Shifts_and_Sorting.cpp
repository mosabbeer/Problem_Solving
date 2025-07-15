#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        ll count1 = 0, count0 = 0, sum = 0, n,i;
        n=str.length();
        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
                count1++;
            else
            {
                if (count1 != 0)
                {
                    sum = sum + i + 1 - count0;
                }
                count0++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}