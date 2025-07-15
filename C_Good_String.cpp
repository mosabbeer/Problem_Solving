#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string str, str1;
    cin >> str;
    int i, j, count = 0, p = 0;
    for (i = 0; i < n; i = i + 2)
    {
        if (str[i] != '*')
        {
            for (j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    str[j] = '*';
                    count++;
                }
                else
                    break;
            }
        }
    }
    if (count == 0 && n % 2 == 0)
    {
        cout << "0\n"
             << str;
    }
    else if (count == 0 && n % 2 != 0)
    {
        cout << "1\n";
        for (i = 0; i < n - 1; i++)
            cout << str[i];
    }
    else
    {
        j = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] != '*')
            {
                str1[j] = str[i];
                j++;
            }
        }
        if ((n - count) % 2 == 0)
        {
            cout << count << endl;
            cout << str1;
        }
        else
        {
            cout << count + 1 << endl;
            for (i = 0; i < j - 1; i++)
                cout << str1[i];
        }
    }
    return 0;
}