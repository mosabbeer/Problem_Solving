#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, sum = 0, sum2 = 0, sum3 = 0, count = 0, count1 = 0, count2 = 0, p, sum4 = 0;
    cin >> a >> b;
    sum = a + b;
    while (a > 0)
    {
        if (a % 10 == 0)
        {
            a = a / 10;
            p = 0;
        }
        else
        {
            count++;
            p = a % 10;
            a = a / 10;
        }
        sum2 = sum2 + p * pow(10, count - 1);
    }
    while (b > 0)
    {
        if (b % 10 == 0)
        {
            b = b / 10;
            p = 0;
        }
        else
        {
            count1++;
            p = b % 10;
            b = b / 10;
        }
        sum4 = sum4 + p * pow(10, count1 - 1);
    }
    sum2=sum2+sum4;
    while (sum > 0)
    {
        if (sum % 10 == 0)
        {
            sum = sum / 10;
            p=0;
        }
        else
        {
            count2++;
            p = sum % 10;
            sum = sum / 10;
        }
        sum3 = sum3 + p*pow(10, count2-1);
    }
    if (sum3 == sum2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}