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
        int a[n + 1], sum = 0, max = -2, min = 200, i, b[n + 1], j = 0, sum1 = 0,p=0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
        }
        if (n == 1)
        {
            cout << a[i] * 2 << endl;
        }
        else if (n == 2)
        {
            if(a[0]==2 && a[1]==2)
            cout<<"-1\n";
            else
            cout << a[1] << " " << a[0] << endl;
        }
        else
        {
            j = 0;

            sum = sum * 10;
            for (i = 0; i < n; i++)
            {
                b[j] = sum / a[i] + 1;

                sum1 = sum1 + b[j];
                j++;
            }
            for(i=0;i<n;i++)
            {
                if(a[i]*b[i]<=sum1)
                {
                    p=-1;
                    break;
                }
            }
            if(p==-1)
            cout<<p<<endl;
            else
            {
                for(i=0;i<n;i++)
                {
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}