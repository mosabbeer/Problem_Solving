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
        int a[n + 2], i, l = 0, s = 0, res = 0, c0 = 0, count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                c0++;
        }
        if (c0 == n)
            cout << "0\n";
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    l = i;
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if (a[i] != 0)
                {
                    s = i;
                    break;
                }
            }
            for(i=l;i<s;i++)
            {
                if(a[i]==0)
                {
                    count=1;
                    break;
                }
            }
            cout<<count+1<<endl;
        }
    }
    return 0;
}