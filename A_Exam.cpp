#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, i;
    cin >> n;
    if (n <= 2)
    {
        cout << "1\n";
        cout << "1";
    }
    else if (n == 3)
    {
        cout << "2\n";
        cout << "1 3";
    }
    else
    {
        cout << n << endl;
        if (n == 4)
            cout << "3 1 4 2";
        else
        {
            for (i = n; i >= 1; i--)
            {
                if (i % 2 == 0)
                    cout << i << " ";
            }
            for (i = n; i >= 1; i--)
            {
                if (i % 2 != 0)
                    cout << i << " ";
            }
        }
    }
    return 0;
}