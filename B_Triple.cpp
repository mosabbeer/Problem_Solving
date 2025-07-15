#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
cin >> t;
while (t--)
{
    int n;
    cin >> n;
    int a[n + 1] = {0}, p = 0, i, q = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> p;
        a[p]++;
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] >= 3)
        {
            q = 1;
            break;
        }
    }
    if (q == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout <<i<<endl;
    }
}
    return 0;
}