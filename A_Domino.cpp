#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int array[n + 1], array2[n + 1], i, cE = 0, ce = 0;
    for (i = 0; i < n; i++)
    {
        cin >> array[i] >> array2[i];
        if (array[i] % 2 != 0)
        {
            cE++;
          
        }
        if (array2[i] % 2 != 0)
        {
            ce++;
           
        }
         array2[i] = array2[i] % 2;
           array[i] = array[i] % 2;
    }
    int p = ce + cE, s = 0;
    if (p % 2 != 0)
        cout << "-1";
   else if (ce % 2 == 0 && cE % 2 == 0)
        cout << "0";
    else
    {
        for (i = 0; i < n; i++)
        {
            if (array2[i] != array[i])
            {
                s = 1;
                break;
            }
        }
        if (s == 0)
            cout << "-1";
        else
            cout << "1";
    }
    return 0;
}