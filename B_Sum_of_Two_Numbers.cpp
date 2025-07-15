#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, sum = 0, p, l, r,count=0,digit=0;
        cin >> n;
        p = n;
        if (p % 10 != 9)
        {
            if (p % 2 == 0)
                l = r = n / 2;
            else
            {
                l = n / 2;
                r = n / 2 + 1;
            }
        }
        else
        {
            while (p > 0)
            {
                sum = sum + p % 10;
                if(p%10!=9)
                count++;
                digit++;
                p = p / 10;
            }
            l = sum / 2;
            r = n - l;
            if(digit==count)
        }
        if (n == 9)
        {
            l = 4;
            r = 5;
        }
        cout << l << " " << r << endl;
    }
    return 0;
}