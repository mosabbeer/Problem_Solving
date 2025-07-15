#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, sum1 = 0, l, m,i;
        for (i = 1; i <= 100; i++)
        {
            sum = sum + i;
            if (sum > k)
                break;
        }
        sum = sum - i;
        l = i;
        k = k - sum;
        if (k == 0)
            for (i = 0; i < l; i++)
                cout << "1 ";
       /* else
        {
            for (i = 1; i <= 100; i++)
            {
                sum1 = sum1 + i;
                if (sum1 > k)
                    break;
            }
            m=i;
            sum1=sum1-i;
            k=k;
        }*/
    }
    return 0;
}