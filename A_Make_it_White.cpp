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
        string str;
        cin >> str;
        int p = -1, q = -1,i;
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                p = i;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                q = i;
                break;
            }
        }
        if (p == -1)
        {
            cout << "0\n";
        }
        else if (p == q)
        {
            cout << "1\n";
        }
        else
            cout << q - p + 1 << endl;
    }
    return 0;
}