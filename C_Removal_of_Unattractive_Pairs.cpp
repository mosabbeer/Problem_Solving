#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, sum = 0;
        cin >> n;
        string str;
        cin >> str;
        int a[28] = {0};
        for (i = 0; i < n; i++)
        {
            a[str[i] - 97]++;
        }
        sort(a, a + 26);
        int p, max = 0, q;
        for (i = 0; i < 26; i++)
        {
            if (a[i] != 0)
            {
                p = i;
                break;
            }
        }
        if (p == 25)
        {
            cout << n << endl;
        }
        else
        {
            for(i=25;i>0;i--)
            {
                q=a[i]-a[i-1];
                if(q<0)
                q=-1*q;
                a[i]=0;
                a[i-1]=q;
                if(q==0)
                a[i]=a[i-1]=1;
            }
            for (i = 0; i < 26; i++)
            {
                sum = sum + a[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}