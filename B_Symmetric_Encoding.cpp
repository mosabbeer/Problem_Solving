#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j = 0, i;
        cin >> n;
        string str, str1, str2;
        int a[200] = {0};
        cin >> str;
        for (i = 0; i < n; i++)
        {
            a[str[i] - 97] = 1;
        }
        j = 0;
        for (i = 0; i <  28; i++)
        {
            if (a[i] == 1)
            {
                str1[j] = 'a' + i;
                j++;
            }
        }
       
    }
    return 0;
}