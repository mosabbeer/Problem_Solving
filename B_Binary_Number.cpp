#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000000] = {0};
int main()
{
    int n, i, count = 0, sum = 0, j = 0, p;
    string str;
    cin >> str;
    n = str.length();
    if (n == 1)
        cout << "0";
    else
    {
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                a[j] = i;
                j++;
            }
        }
        if (j == 0)
            cout << n + 1;
        else if (n-1 == j)
            cout << n-1;
        else
        {
            for (i = n - 1; i >= 0; i--)
            {

                if (str[i] == '0')
                {
                    count++;
                    j--;
                }
                else
                {
                    count = count + 2;
                    str[a[j - 1]] = '1';
                    j--;
                }
                if (j == 0)
                    break;
            }
            cout << count + i + 1;
        }
    }
}