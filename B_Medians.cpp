#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == k && n == 1)
            cout << "1\n1\n";
        else if (k == 1 || n == k)
        {
            cout << "-1\n";
        }
        else 
        {
            cout<<"3\n";
            if(k%2==0)
            cout<<"1 "<<k<<" "<<k+1<<endl;
            else
            cout<<"1 "<<k-1<<" "<<k+2<<endl;
        }
    }
    return 0;
}