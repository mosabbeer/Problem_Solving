#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100000001] = {0};
int main()
{
   int  i, p, l;
    for (i = 18; i < 100000001; i++)
    {
        p = i;
        l = 0;
        while (p > 0)
        {
            l = l + p % 10;
            p = p / 10;
        }
        if (l == 10)
            a[i] = 1;
            
    }
    int n, count = 0;
    cin >> n;
    i=19;
   while(count!=n)
    {
        if(a[i]==1)
        count++;
        if(count==n)
        break;
        i++;
        
    }
    cout << i;
    return 0;
}