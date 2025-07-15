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
        int a[n + 1], i, temp;
        for (i = 0; i < n; i++)
            cin >> a[i];
       
        if (n > 2)
        {
            for(i=0;i<n-1;i=i+2)
            swap(a[i], a[i+1]);
        }
         reverse(a, a + n);
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}