#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, a[100] = {0}, j = 0;
    cin >> n;
    string str, str1[5];
    cin >> str;
    int i;
    if (n == 1)
        cout << str[0];
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
               // cout << str[i];
            }
            else
            {
                if (str[i] == 'B' && str[i + 1] == 'R')
                {
                    str[i + 1] = 'G';
                }
                else if (str[i] == 'B' && str[i + 1] == 'G')
                {
                    str[i + 1] = 'R';
                }
                else if (str[i] == 'G' && str[i + 1] == 'B')
                {
                    str[i + 1] = 'R';
                }
                else if (str[i] == 'G' && str[i + 1] == 'R')
                {
                    str[i + 1] = 'B';
                }
                else if (str[i] == 'R' && str[i + 1] == 'G')
                {
                    str[i + 1] = 'B';
                }
                else if (str[i] == 'R' && str[i + 1] == 'B')
                {
                    str[i + 1] = 'G';
                }
            }
        }
    }
    for (i = 1; i < n; i++)
    {
        a[str[i]]++;
    }
    for (i = 65; i < 97; i++)
    {
        if (a[i] > 0)
        {
            printf("%c", i);
        }
    }
    // cout<<str1;
    return 0;
}