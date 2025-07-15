#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str1, str2;
        cin >> str;
        int i, n = 0, j = 0;
        if (str.length() < 3)
        {

            if (str[0] < str[1])
                cout << str[0] << " " << str[1] << endl;
            else
                cout << "-1\n";
        }
        else
        {
            for (i = 1; i < str.length(); i++)
            {
                if (str[i] != '0')
                {
                    n = i;
                    break;
                }
            }
            if (n == 0)
                cout << "-1\n";
            else
            {
                str1 = str.substr(0, n);
                str2 = str.substr(n, (str.length() - n));

                if (str1.length() < str2.length())
                {
                    cout << str1 << " " << str2 << endl;
                }
                else if (str1.length() > str2.length())
                {
                    cout << "-1\n";
                }
                else
                {
                    if (str1 == str2 || str1 > str2)
                        cout << "-1\n";
                    else
                        cout << str1 << " " << str2 << endl;
                }
            }
        }
    }
    return 0;
}