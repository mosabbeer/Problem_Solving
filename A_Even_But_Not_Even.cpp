#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, countO = 0, i, countE = 0;
        cin >> n;
        string str;
        cin >> str;
        for (i = 0; i < n; i++)
        {
            if ((str[i] - 48) % 2 == 0)
                countE++;
            else
                countO++;
        }
        if (countE == n || (countE == n - 1) && ((str[1] - 48) % 2 == 0) || n == 1|| countO==1)
            cout << "-1\n";
            else if(n==2)
            {
               if(countE==1 || countE==2 )
                cout<<"-1\n";
                else
                cout<<str<<endl;
            }
        else
        {
            for (i = 1; i < n; i++)
            {
                if ((str[i] - 48) % 2 == 0)
                    str[i] = '*';
            }
            if (countO % 2 != 0)
                for (i = 0; i < n; i++)
                {
                    if (str[i] != '*')
                    {
                        str[i] = '*';
                        break;
                    }
                }
            for (i = 0; i < n; i++)
            {
                if (str[i] != '*')
                    cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}