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
        string str;
        cin >> str;
        n = str.length();
        int count = 0, i, count1 = 0;
        for (i = n - 1; i > 0; i--)
        {
            if (str[i] == '0' && str[i - 1] != '0')
                count++;
        }
        for (i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' && str[i - 1] == '0')
                count1++;
        }
        if (count == 0)
            cout << "1\n";
        else if (count1 > count)
            cout << count + 2 << endl;
        else
            cout << count + 1 << endl;
    }
    return 0;
}