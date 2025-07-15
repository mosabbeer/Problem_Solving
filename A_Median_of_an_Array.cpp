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
        int a[n + 1], i, count = 0, mid, p = 0, q = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << "1\n";
        else if (n == 2)
        {
            if (a[0] == a[1])
                cout << "2\n";
            else
                cout << "1\n";
        }
        else
        {
            sort(a, a + n);
            mid = (n-1) / 2;
           
            for (i = mid; i < n; i++)
            {
                if (a[mid] == a[i])
                    count++;
                if (a[i] > a[mid])
                    break;
            }
           
           
                cout << count << endl;
            
           
        }
    }

return 0;
}
