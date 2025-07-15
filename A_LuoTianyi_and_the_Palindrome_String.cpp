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
        int i, n = 0, p = 0;
        n = str.length();
        for (i = n - 1; i >= 0; i--)
        {
            if (str[i] == str[0])
            {
                p++; 
            }
        }
        if (p == n)
            cout << "-1\n";
        else
        {
            cout << n- 1 << endl;
        }
    }
    return 0;
}