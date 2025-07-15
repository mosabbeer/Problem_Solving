#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sumation(ll a[], ll index, ll n)
{
  int max = 0;
  if (index == n)
    return 0;
  if (a[index] > max)
    max = a[index];
  cout << index << endl;
  sumation(a, index + 1, n);
  return max;
}
int main()
{
  ll n;
  cin >> n;
  ll a[n + 1], i;
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  i = sumation(a, 0, n);
  cout << i;
  return 0;
}