#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        string number, newNumber ;
        char p;
        cin >> number;
        if (number[0] == '9')
        {
            for (i = 0; i <= n; i++)
            {
                newNumber[i] = '1';
            }
        }
        else
        {
            p = number[0]++;
            for (i = 0; i < n; i++)
            {
                newNumber[i] = p;
            }
        }
        j = n - 1;
        for (i = 0; i < n; i++)
        {
            newNumber[i] = newNumber[i] - number[j];
            j--;
            if (j == 0)
                break;
        }
        if (number[0] == '9')
        {
            for (i = n; i >= 0; i--)
            {
                cout << newNumber[i];
            }
        }
        else
        {
            for (i = n - 1; i >= 0; i--)
                cout << newNumber[i];
        }
        cout << endl;
    }
    return 0;
}