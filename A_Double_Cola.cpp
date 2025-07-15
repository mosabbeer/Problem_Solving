#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x, i, sum = 0, p, d = 0;
    cin >> n;
    p = n;
    if (n > 5)
    {
        for (i = 1; i <= n; i = i * 2)
        {
            x = i * 5;
            sum = sum + x;
            if (sum > n)
            {
                break;
            }
        }
        sum = sum - x;
        sum = n - sum;
        //cout<<sum<<endl;
        i = i / 2;
        x=x/5;
       // x = i ;
        p = sum / x;
        //cout << p;
        if (sum % x != 0)
            p++;
    }
    if (p == 1)
        cout << "Sheldon";
    else if (p == 2)
        cout << "Leonard";
    else if (p == 3)
        cout << "Penny";
    else if (p == 4)
        cout << "Rajesh";
    else
        cout << "Howard";

    return 0;
}