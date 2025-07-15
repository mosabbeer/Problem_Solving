#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, count = 0, i, min = 1000000, p = 0;
        cin >> a >> b;
        if (a < b)
            cout << "1";
        else if (a == b)
            cout << "2";
        else
        {
            if (b == 1)
            {
                b++;
                count++;
                p++;
            }
            int temp = a;
            while (temp > 0)
            {
                temp = temp / b;
                count++;
            }
            if (count < min)
            {
                min = count;
            }
            count = 0;
            for (i = 0; i < 50; i++)
            {
                int temp = a;
                b++;
                count = count + i;
                while (temp > 0)
                {
                    temp = temp / b;
                    count++;
                }
                if (count < min)
                {
                    min = count;
                }
                count = 0;
            }
            cout << min;
        }
        cout << "\n";
    }
    return 0;
}