#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n, i, count = 0, p;
        n = str.length();
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count++;
                p = i;
                break;
            }
        }
        if (count == 0)
        {
            cout << "1 1 1 " << n << endl;
        }
        else
        {
            int s;
            s = n / 2;
            if (p <= s)
            {
                cout << "1 " << n << " 1" << " " << n - p << endl;
            }
            else if(p==n-1)
            {
                cout<<"1 "<<n<<" "<<"1 1\n";
            }
            else
            {
                p++;
                s=n-p;
                s=p-s;
                cout << "1 " << n << " "<<s <<" "<<p<<endl;
            }
        }
    }
    return 0;
}