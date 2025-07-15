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
        int i, count1 = 0, count2 = 0, p;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == ')')
                count1++;
            else
                count2++;
        }
        if (count1 > count2)
            p = count1 - count2;
        else
            p = count2 - count1;
        if (p % 2 != 0)
            cout << "-1\n";
        else
            cout << p / 2 << endl;
    }
    return 0;
}