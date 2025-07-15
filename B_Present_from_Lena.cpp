#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int row, col, i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
            cout << " ";
        for (j = 0; j <= i / 2; j++)
            cout << j << " ";
        for (j = i / 2 + 1; j >= 0; j++)
            cout << j << " ";
    }
    return 0;
}