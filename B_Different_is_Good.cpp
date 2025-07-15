#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, a[160]={0}, sum = 0;
    cin >> n;

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        a[str[i]]++;
    }
    for ( int i = 97; i <= 123; i++)
    {
        if (a[i] > 1)
            sum = sum + a[i] - 1;
           // cout<<a[i]<<" ";
    }
    cout << sum;
    return 0;
}