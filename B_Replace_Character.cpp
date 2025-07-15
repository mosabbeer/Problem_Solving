#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, min = 300, max = -7, l = 0, m = 0;
        cin >> n;
        string str;
        cin >> str;
        if (n == 1)
            cout << str << endl;
        else
        {
            int a[200] = {0};
            for (i = 0; i < n; i++)
            {
                a[str[i]]++;
            }
            for (i = 97; i <= 123; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                    l = i;
                }
                if (a[i] <= min && a[i] != 0)
                {
                    min = a[i];
                    m = i;
                }
            }
            for(i=0;i<n;i++)
            {
                if(str[i]==m)
                {
                    str[i]=l;
                    break;
                }
            }
            cout<<str<<endl;
        }
    }
    return 0;
}