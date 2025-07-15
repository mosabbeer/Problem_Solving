#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int page, initialSpeed, MaximumSpeed, incrimant, forget, i, sum = 0, p = 0;
    cin >> page >> initialSpeed >> MaximumSpeed >> incrimant >> forget;
    sum = initialSpeed;
    i = 0;
    if (sum == page)
    {
        cout << "1";
    }
    else
    {
        sum = i = 0;
        while (sum <= page)
        {
            p = initialSpeed + i * incrimant;
            if (p >= MaximumSpeed)
                p = MaximumSpeed;
            i++;
            sum = sum + p;
            if (sum >= page)
                break;
            else
                sum = sum - forget;
        }
        cout << i;
    }
    return 0;
}