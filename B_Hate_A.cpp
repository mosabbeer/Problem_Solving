#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string String;
    int i, sum = 0, n;
    cin>>String;
    for (i = 0; i < String.length(); i++)
    {
        if (String[i] != 'a')
        {
            sum = 1;
            break;
        }
    }
    if (sum == 0)
        cout << String;
    else
        cout << ":(";
    return 0;
}