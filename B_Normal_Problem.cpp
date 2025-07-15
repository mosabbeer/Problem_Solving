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
        int n, i;
        n = str.length();
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'p')
                str[i] = 'q';
            else if (str[i] == 'q')
                str[i] = 'p';
        }
        for (i = n - 1; i >= 0; i--)
            cout << str[i];
        cout << endl;
    }
    return 0;
}