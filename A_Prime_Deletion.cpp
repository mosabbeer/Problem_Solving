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
        int count = 0, i, p = 0;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == '1' || str[i] == '3')
                count++;
        }

        if (count == 2)
        {
            for (i = 0; i < str.length(); i++)
                if (str[i] == '1' || str[i] == '3')
                    cout << str[i];
        }
        else
            cout << "-1";

        cout << endl;
    }
    return 0;
}