#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int c1 = 0, c0 = 0, i, n,d;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            c1++;
        else
            c0++;
    }
    if (c1!=c0)
        cout << "1\n";
    else
        cout << "2\n";
    if (c1 != c0)
        cout << str;
    else
    {
        for (i = 0; i < str.length(); i++)
        {
            cout << str[i];
            d=i;
            if (str[i] == '1')
            {
                c1--;
            }
            else
                c0--;
            if (c1 != c0)
                break;
        }
        cout << " ";
        for(i=d+1;i<n;i++)
        cout<<str[i];
    }
    return 0;
}