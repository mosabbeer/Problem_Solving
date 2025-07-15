#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int i, l = 0, d;
  ll n;
  cin >> n;
  if (n >= -8)
  {
    for (i = 1; i <= 50; i++)
    {
      d = n + i;
      while (d != 0)
      {
        if (d % 10 == 8)
        {
          l = 1;
          break;
        }
        else
          d = d / 10;
      }
      if (l == 1)
        break;
    }
  }
 else
  {
    for (i = 1; i <= 50; i++)
    {
      d = n + i;
      while (d != 0)
      {
        if (d % 10 == -8)
        {
          l = 1;
          break;
        }
        else
          d = d / 10;
      }
      if (l == 1)
        break;
    }
  }
  cout << i;
  return 0;
}