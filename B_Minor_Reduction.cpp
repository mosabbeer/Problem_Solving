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
        int n, i, max = 0, l, p;
        p = str.length();
        for (i = p-1; i>0; i--)
        {
            n = str[i] - 48 + str[i - 1] - 48;
            if (n>=10)
            {
                max = n;
                l = i-1;
                break;
            }
        }
        if (max >= 10)
        {
            for (i = 0; i < l; i++)
                cout << str[i];
            cout << max;
            for (i = l + 2; i < p; i++)
                cout << str[i];
            cout << endl;
        }
        else
        {
            cout << str[0] - 48 + str[1] - 48;
            for (i = 2; i < p; i++)
                cout << str[i];
                cout<<endl;
        }
    }
    return 0;
}