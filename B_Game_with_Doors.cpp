#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r;
        cin >> L >> R;
        if(r>R)
        {
            int temp1,temp2;
            temp1=R;
            temp2=L;
            L=l;
            R=r;
            l=temp2;
            r=temp1;
        }
        if (L > r)
        {
            if (L - r == 1)
                cout << "1\n";
        }
        else if (L == r)
            cout << "2\n";
        else if (L == l && r == R)
            cout << r - l << endl;
        else if (L == l)
        {
            if (R > r)
                cout << r - l + 1 << endl;
            else
                cout << R - L + 1 << endl;
        }
        else if (R == r)
        {
            if (L > l)
                cout << R - L + 1 << endl;
            else
                cout << r - l + 1 << endl;
        }
        else
        {
            if ((r - l) > (R - L))
                cout << R - L + 2 << endl;
            else
                cout << r - l + 2 << endl;
        }
    }
    return 0;
}