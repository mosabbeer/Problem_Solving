#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 0, i;
        cin >> n;
        int a[n + 1];
        int b[n + 1] = {0};
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        pair<int, int> v[n + 1];
        for (i = 0; i < n; i++)
        {
            v[i].first = a[i];
        }
        for (i = 0; i < n; i++)
        {
            v[i].second = b[a[i]];
        }
        for (i = 0; i < n; i++)
        {
            if (v[i].second > 2)
            {
                p = 1;
                break;
            }
        }
        if (p == 0)
        {

            for (i = 0; i < n - 1; i++)
            {
                if (v[i].first == v[i + 1].first)
                {
                    v[i + 1].second = 0;
                }
            }

            for (i = 1; i < n - 1; i++)
            {
                if (v[i].second ==2 && v[i].first != v[i + 1].first)
                {
                    p = 1;
                    break;
                }
            }
        }
        if (p == 0)
        {
            if (v[0].second == 2)
            {
                if (v[0].first != v[1].first)
                {
                    p = 1;
                }
            }
        }
        if (p == 0)
        {
            if (v[n - 1].second == 2)
            {
                if (v[n - 2].first != v[n - 1].first)
                {
                    p = 1;
                }
            }
        }
        if (p == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        /* for(i=0;i<n;i++)
         cout<<v[i].first<<" ";
         cout<<endl;
          for(i=0;i<n;i++)
         cout<<v[i].second<<" ";
         cout<<endl;*/
    }

    return 0;
}