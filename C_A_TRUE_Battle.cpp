#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int i, count = 0, n, count1 = 0;
        cin >> n;
        string str;
        cin >> str;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
                count++;
            else
                count1++;
        }
        if (count1 >= count)
            cout << "YES\n";
        else
        {
        }
    }
    return 0;
}