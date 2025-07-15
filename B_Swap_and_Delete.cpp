#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, count0 = 0, count1 = 0, p = 0;
        string str, str1;
        cin >> str;
        n = str.size();
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
                count0++;
            else
                count1++;
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0' && count1 != 0)
                count1--;
            else if (str[i] == '1' && count0 != 0)
                count0--;
            else
            {
                p = i;
                break;
            }
        }
        if (count1 == count0)
            cout << "0\n";
        else
            cout << n - p << endl;
    }
    return 0;
}