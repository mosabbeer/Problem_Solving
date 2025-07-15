#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k + 1], i, sum = 0, j, l = 0,p=0;
        for (i = 0; i < k; i++)
            cin >> a[i];
        sort(a, a + k);
        for (i = k - 1; i >p; i--)
        {
            sum = sum + n - a[i];
            a[i] = n + 1;
            for (j = l; j < k; j++)
            {
                if (sum >= a[j] )
                {
                    l++;
                   p=l;
                }
                else 
                break;
            }
        }
        cout << k-l << endl;
       // for(i=0;i<k;i++)
       // cout<<a[i]<<" ";
       // cout<<endl;
    }
    return 0;
}