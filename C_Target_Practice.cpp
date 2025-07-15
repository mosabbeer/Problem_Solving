#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        string str[10];
        for (i = 0; i < 10; i++)
        {
            cin >> str[i];
        }
        int sum = 0, p = 0, q = 9;
        while (p != 5)
        {
            
                for (i = p; i <= q; i++)
                {
                    if (str[p][i] == 'X')
                        sum = sum + p + 1;
                }
                for (i = p+1; i <= q; i++)
                {
                    if (str[i][p] == 'X')
                        sum = sum + p + 1;
                }
                for (i = p+1; i <= q; i++)
                {
                    if (str[q][i] == 'X')
                        sum = sum + p + 1;
                }
                for (i = p+1; i < q; i++)
                {
                    if (str[i][q] == 'X')
                        sum = sum + p + 1;
                }
            
           
            p++;
            q--;
        }
        cout << sum << endl;
    }
    return 0;
}