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
<<<<<<< HEAD
        int a[n + 2], i, c0 = 0, count = 0, j = 0,count1=0;
        for (i = 1; i <= n; i++)
=======
        int a[n + 2], i, l = 0, s = 0, res = 0, c0 = 0, count = 0;
        for (i = 0; i < n; i++)
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
        {
            cin >> a[i];
            if (a[i] == 0)
                c0++;
        }
<<<<<<< HEAD
        if (c0 == 0)
            cout << "1\n";
        else
        {
            a[n+1] =a[0]= 0;
            for (i = n ; i >= 0; i--)
            {
                if (a[i] == 0 && a[i + 1] != 0)
                    count++;
            }
            cout << count << endl;
=======
        if (c0 == n)
            cout << "0\n";
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    l = i;
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if (a[i] != 0)
                {
                    s = i;
                    break;
                }
            }
            for(i=l;i<s;i++)
            {
                if(a[i]==0)
                {
                    count=1;
                    break;
                }
            }
            cout<<count+1<<endl;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
        }
    }
    return 0;
}