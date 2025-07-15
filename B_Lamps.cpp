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
        int i, sum = 0,j,max=0,count=0;
        pair<int, int> a[n + 1];
        for (i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n);
        reverse(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (a[i].first != a[n - 1].first)
            {
                sum = sum + a[i].second;
            }
            else
                break;
        }
        for(j=i;j<n;j++)
        {
            if(a[j].second>max)
            max=j;
            count++;
        }
        if(count==1)
        max=0;
        cout <<sum+max<< endl;
    }
    return 0;
}