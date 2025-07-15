#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, p, j = 0;
        cin >> n;
        string str, str1;
        cin >> str;
        for (i = n - 1; i >= 0; i--)
        {
            if (str[i] != '0')
            {
                str1[j] = str[i] - 48 + 96;
                j++;
            }
            else if(str[i]=='0')
            {
                p = str[i] - 48 + str[i - 1] * 10;
                str1[j] = p + 96;
                j++;
                i = i - 3;
            }
        }
       // for(i=j-1;i>=0;i++)
        cout << str1[1] ;
        cout<<endl;
    }
    return 0;
}