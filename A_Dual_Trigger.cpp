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
        string str;
        cin >> str;
        int count = 0, i,q=0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count++;
                q=i;
            }
        }
        if(count==2 && str[q]==str[q-1])
        cout<<"NO\n";
        else if (count % 2 == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}