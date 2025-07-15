#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, x, i;
    cin >> a >> b >> x;
    if (x != 2)
    {
        x = x - 2;
        while (x > 0)
        {
            if (a != 0)
            {
                cout << "0";
                a--;
            }
            if (b != 0)
            {
                cout << "1";
                b--;
            }
            x--;
        }
        for (i = 0; i < a; i++)
            cout << "0";
        for (i = 0; i < b; i++)
            cout << "1";
    }
    else
    {
        if (a !=1)
        {
            x--;
            while (x > 0)
            {
                if (a != 0)
                {
                    cout << "0";
                    a--;
                }
                if (b != 0)
                {
                    cout << "1";
                    b--;
                }
                x--;
            }
            for (i = 0; i < a; i++)
                cout << "0";
            for (i = 0; i < b; i++)
                cout << "1";
        }
        else if(b!=1)
        {
             x--;
            while (x > 0)
            {
                if (b != 0)
                {
                    cout << "1";
                    b--;
                }
                if (a != 0)
                {
                    cout << "0";
                    a--;
                }
                x--;
            }
              for (i = 0; i < b; i++)
                cout << "1";
            for (i = 0; i < a; i++)
                cout << "0";
        }
    }

    return 0;
}