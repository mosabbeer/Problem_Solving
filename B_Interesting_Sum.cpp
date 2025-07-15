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
        ll a[n + 1], min = 4329045259, max = 0, i, p, q, l, m,d;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
            {
                min = a[i];
                p = i;
            }
            if (a[i] > max)
            {
                max = a[i];
                q = i;
            }
        }
        if (max == min)
            cout << "0\n";
        else
        {\
            d=max-min;
            min = 4329045259, max = 0;
            for (i = 0; i < p; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
                if (a[i] < min)
                    min = a[i];
            }
            l = max - min;
            min = 4329045259, max = 0;
            for(i=p+1;i<q;i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
                if (a[i] < min)
                    min = a[i];
            }
            m=max-min;
            if(m>l)
            l=m;
            min = 4329045259, max = 0;
            for(i=q+1;i<n;i++)
            {
                
                if (a[i] > max)
                {
                    max = a[i];
                }
                if (a[i] < min)
                    min = a[i];
            }
             m=max-min;
            if(m>l)
            l=m;
             cout<<l+d<<endl;
        }
       
    }
    return 0;
}