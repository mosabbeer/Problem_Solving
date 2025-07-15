#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a[105][105],p;
    int  c, b, i, j, sum = 0;
    cin >> b >> c;
    for (i = 1; i <= b; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cin >> a[i][j];
            p = a[i][1];
            if (p != a[i][j])
                sum++;
        }
    }
     cout<<sum;
    if (sum == 0)
    {
        p = a[1][1];
        for (j = 2; j <= c; j++)
        {
            if (p == a[j][1])
            {
                sum++;
                break;
            }
        }
    }
    if (sum == 0)
        cout << "YES";
    else
        cout << "NO";
      //  cout<<sum;
    return 0;
}