#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin>>str;
        int i,count=0;
        for(i=0;i<n-2;i++)
        {
            if(str[i]==str[i+2])
            count++;
        }
        cout<<n-1-count<<endl;
    }
    return 0;
}