#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    int i, count = 0, pal = 0, n = str.length();
    for (i = 0; i < str.length() / 2; i++)
    {
        if (str[i] == str[n - i - 1])
            pal++;
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] == str[0])
            count++;
    }
    if (count == str.length())
        cout << "0";
    else if (pal != str.length() / 2)
        cout << str.length();
    else if (pal == str.length() / 2)
        cout << str.length() - 1;
    return 0;
}