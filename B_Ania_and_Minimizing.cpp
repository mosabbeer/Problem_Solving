#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k, i, l = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    if (k > 0)
    {
        if (n == 1)
        {
            if (k > 0)
                cout << "0";
        }
        else
        {
            if (str[0] != '1')
            {
                str[0] = '1';
                k--;
            }
            for (i = 1; i < n; i++)
            {
                 if (l == k)
                    break;
                if (str[i] != '0')
                {
                    str[i] = '0';
                    l++;
                }
                if (l == k)
                    break;
            }
            cout << str;
        }
    }
    else
        cout << str;
    return 0;
}