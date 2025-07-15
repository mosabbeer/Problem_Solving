#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, sum = 0;
        cin >> a >> b >> c;
        sum=a+b;
        if ((sum%2==0 && c%2!=0)|| (sum%2!=0 && c%2==0))
            cout << "-1\n";
        else
        {
            if ((a + b) >= c)
                cout << (a + b + c) / 2 << endl;
            else
            {
                cout << (a + b) << endl;
            }
        }
    }
    return 0;
}