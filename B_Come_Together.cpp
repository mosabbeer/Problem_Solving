#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b, c, d, sum = 1, sum1 = 0, sum2 = 0;
        cin >> x >> y;
        cin >> a >> b;
        cin >> c >> d;
        if ((a > x && x > c) || (x > a && x < c))
        {
            sum1 = 0;
        }
        else if (x >= a && x >= b)
        {
            if (a >= c)
                sum1 = a - x;
            else
                sum1 = c - x;
        }
        else if (x <= a && x <= c)
        {
            if (a >= c)
                sum1 = x - c;
            else
                sum1 = x - a;
        }
        if ((b > y && y > d) || (d > y && b < y))
            sum2 = 0;
        else if (y >= b && y >= d)
        {
            if (b >= d)
                sum2 = b - y;
            else
                sum2 = d - y;
        }
        else if (y <= b && y <= d)
        {
            if (b >= d)
                sum2 = y - d;
            else
                sum2 = y - b;
        }
        if(sum1<0)
        sum1=sum1*(-1);
        if(sum2<0)
        sum2=-1*sum2;
        sum = sum + sum1 + sum2;
        cout << sum << endl;
         // cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}