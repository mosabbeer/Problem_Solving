#include <bits/stdc++.h>
using namespace std;
#define ll long long
int print(int n)
{
    ll sum=1;
    if(n==1)
    {
        return 1;
    }
    sum=((print(n-1)%1000000007)*(n%1000000007))%1000000007;
    return sum;
}
int main()
{
        ll n,x;
        cin >> n;
       x= print(n);
        cout<<x;
    
    return 0;
}