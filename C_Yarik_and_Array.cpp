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
        int a[n + 1], i;
        ll max = -99999999999, sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
            sum = a[0];
            if (sum > max)
                  max = sum;
            for (i = 1; i < n; i++)
            {
                if ((a[i - 1] % 2 == 0 && a[i] % 2 != 0)|| (a[i - 1] % 2 != 0 && a[i] % 2 == 0))
                {
                    sum = sum + a[i];
                    if (sum > max)
                        max = sum;
                }
                else
                    sum = a[i-1];
            }
       
        
        cout<<max<<endl;
    }
    return 0;
}