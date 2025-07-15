#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0, c = 0;
        cin >> n;
        if (n == 1 || n == 2 || n == 4)
            cout << "-1\n";
        else
        {
            if (n % 3 == 0)
                a = n / 3;
            else if (n % 5 == 0)
                b = n / 5;
            else if (n % 7 == 0)
                c = n / 7;
            else
            {
                if (n % 5 == 1)
                {
                    b = n / 5 - 1;
                    a = 2;
                }
                else if (n % 5 == 2)
                {
                    b = n / 5 - 1;
                    c = 1;
                }
                else if (n % 5 == 3)
                {
                    b = n / 5;
                    a = 1;
                }
                else if (n % 5 == 4)
                {
                    b = n / 5 - 1;
                    a = 3;
                }
            }
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}