#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int sum = 0, p, i;
    for (i = 0; i < 8; i++)
    {
        p = n;
        while (p > 0)
        {
            sum = sum + p % 10;
            p = p / 10;
        }
       // cout<<sum<<endl;
        if (sum%4 != 0)
        {
            sum = 0;
            n++;
        }
        else if (sum%4 == 0)
            break;
    }
    cout << n;
    return 0;
}