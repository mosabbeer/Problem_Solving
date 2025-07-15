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
        int a[n + 1], b[n + 1], i, temp;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if (n == 1)
            cout << "-1\n";
        else
        {
            sort(b, b + n);
           
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] == b[i])
                {
                    temp = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = temp;
                }
            }
             if (a[n - 1] == b[n - 1])
            {
                temp = b[n - 1];
                b[n - 1] = b[n - 2];
                b[n - 2] = temp;
            }
            for(i=0;i<n;i++)
            cout<<b[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}