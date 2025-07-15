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
        int a[n + 1], i, j, count = 0, p=0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > a[k-1])
                break;
        }
        p = i - 1;
        if(i==0)
        count=0;
        else
        count=1;
      //  cout<<i<<endl;
        swap(a[k-1],a[i]);
        for(j=i+1;j<k;j++)
        {
            if(a[i]<a[j])
            break;
            else
            count++;
        }
        if(k==1)
        count=0;
        cout<<max(p,count)<<endl;
    }
    return 0;
}