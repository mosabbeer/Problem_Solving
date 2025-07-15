#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, count = 0, max = 0, i;
    cin >> n;
    string str;
    cin >> str;
    for (i = 0; i < n - 2; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
            count = 0;
    }
    if (max % 2 != 0)
    max--;
    cout << max;
    return 0;
}