#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str[4];
        int n, i, j,a[80]={0};
        for (i = 0; i < 3; i++)
        {
            cin >> str[i];
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (str[i][j] != '?')
                   {
                    a[str[i][j]]++;
                   }
            }
        }
       for(i=65;i<69;i++)
       {
        if(a[i]==2)
        break;
       }
       printf("%c\n",i);

       
    }
    return 0;
}