#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a[2], sum = 0, p, l;
        cin >> a[0] >> a[1];
        sort(a, a + 2);
        if (2 * a[0] <= a[1])
            cout << a[0] << endl;
        else
        {
            if(a[1]-a[0]==1)
           cout<<a[1]/2+1<<endl;
           else
           cout<<a[1]/2<<endl;
        }
    }
    return 0;
}