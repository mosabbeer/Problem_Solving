#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k, a[150] = {0}, i, max = 0;
    cin >> n >> k;
    string balon;
    cin >> balon;
    for (i = 0; i < balon.length(); i++)
    {
        a[balon[i] - 97]++;
    }
    for (i = 0; i <= 26; i++)
    {
        if (a[i] > max)
            max = a[i];
            
    }
    if (max > k)
        cout << "NO";
    else
        cout << "YES";
       
    return 0;
}