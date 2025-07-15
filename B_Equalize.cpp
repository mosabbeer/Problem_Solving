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
        long long a[n + 1], b[n + 1], i, j = 0, max = -9, count = 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 1; i < n; i++)
        {
            if (((a[i] - a[i-1]) <= n )&& ((a[i]-a[i-1])!=0))
            {
                b[j] = a[i] - a[i - 1];
                j++;
            }
        }
        if (j == 0)
        {
            cout << "0\n";
        }
        else if(j==1)
        {
            cout<<"2\n";
        }
        else
        {
            sort(b, b + j);
            for (i = 0; i < j; i++)
            {
                cout<<b[i]<<" ";
                if (b[i] == b[i - 1])
                {
                    count++;
                    if (count > max)
                        max = count;
                }
                else
                count=1;
            }
            cout<<max+1<<endl;
        }
    }
    return 0;
}