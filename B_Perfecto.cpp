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
        cin>>n;
        int a[n + 5]={0}, i,p;
        int newNumber = (n + 1) * n / 2;
        p=sqrt(newNumber);
        if (p*p==newNumber)
            cout << "-1\n";
        else
        {
            a[1] = 2;
            a[2] = 1;
            for (i = 3; i <= n; i++)
            {
                a[i] = i;
                newNumber = (i-1) * i / 2;
                 p = sqrt(newNumber);
                if (p * p == newNumber)
                {
                    swap(a[i], a[i - 1]);
                }
            }
            for (i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}