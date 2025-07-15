#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string str[n];
    int i, j, count = 0, max = 0;
    for (i = 0; i < n; i++)
    {
       
            cin >> str[i];
    }
    for (j = 0; j < 7; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (str[i][j] == '1')
            {
                count++;
            }
           // cout<<count<<endl;
            if (count > max)
            max = count;
      
        }
          count = 0;
        
    }
    cout << max;
    return 0;
}