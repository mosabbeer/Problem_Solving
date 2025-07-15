#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = n / (a + b + c), l;
        sum=sum*3;
        l = n - sum;
        if (l > (a + b))
            sum = sum + 3;
        else if (l > a)
            sum = sum + 2;
        else
            sum++;
        cout << sum << endl;
    }
    return 0;
}