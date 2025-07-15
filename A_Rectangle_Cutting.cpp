#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, p = 0, q = 0;
        cin >> a >> b;
        if (a % 2 != 0 && b % 2 != 0)
        {
            cout << "No\n";
        }
        else
        {
            c = a;
            d = b;
            if (c % 2 == 0)
            {
                c = c / 2;
                d = d * 2;
                if (c != b || a != d)
                {
                    cout << "Yes\n";
                    q = 1;
                }
                else
                    p = 1;
            }
            if (q == 0)
            {
                c = a;
                d = b;
                if (d % 2 == 0 )
                {
                    c = c * 2;
                    d = d / 2;
                    if (c != b || a != d)
                    {
                        cout << "Yes\n";
                        p=0;
                    }
                    else
                        cout << "No\n";
                }
            }
            if(p==1)
            cout<<"No\n";
        }
     
    }
       return 0;
}