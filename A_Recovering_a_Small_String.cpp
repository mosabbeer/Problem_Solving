#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0;
        if (n >= 28)
        {
            a = 26;
            n = n - 26;
        }
        else if (n < 28)
        {
            a = 1;
            n--;
        }
        if (n >= 27)
        {
            b = 26;
            n = n - 26;
        }
        else if (n < 27)
        {
            b = 1;
            n--;
        }
        c = n;
       // cout<<a<<b<<c<<endl;
        for (int i = 0; i < 3; i++)
        {
            if (a <= b && a <= c)
            {
                printf("%c", a + 96);
                a = 2000;
            }
            else if (b <= a && b <= c)
            {
                printf("%c", b + 96);
                b=2000;
            }
            else if (c <= a && c <= b)
            {
                printf("%c", c + 96);
                c = 2000;
            }
        }
        cout << endl;
    }
    return 0;
}