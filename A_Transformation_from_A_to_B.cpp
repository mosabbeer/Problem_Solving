#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k, p, l = 0;
    cin >> n >> k;
    int a[10000], i = 1;
    int count;
    while (1)
    {
        a[i] = k;
        if (k % 2 == 0)
        {
            k = k / 2;
        }
        else
        {
            p = k % 10;
            if (p != 1 || n>k)
            {
                l = 1;
                break;
            }
            else
                k = k / 10;
        }
        i++;
        if (l == 1 || n == k)
        {
            a[i] = k;
            i++;
            break;
        }
    }
    if (l == 1)
        cout << "NO";
    else
    {
        cout << "YES\n";
        cout << i-1 << endl;
        for (int j = i-1; j>0; j--)
        {
            cout << a[j] << " ";
        }
    }
   // cout<<endl<<l;
    return 0;
}