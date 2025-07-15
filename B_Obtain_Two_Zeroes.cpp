#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2],s,r;
        cin >> a[0] >> a[1];
        sort(a, a + 2);
        if(a[0]==a[1]&& a[1]==0)
        {
            cout<<"YES\n";
        }
       else if (a[0] == a[1]|| a[0]==0)
            cout << "NO\n";
        else
        {
            int p = a[1] - a[0];
            s=a[0]-p;
            r=a[1]-2*p;
            if(s==r && s>=0 &&r>=0)
            {
                cout << "YES\n";
            }
            else
            cout<<"NO\n";
        }
    }
    return 0;
}