#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c,i;
        cin >> a >> b >> c;
        if (c != 1)
        {
            cout << "YES\n";
            cout << a << endl;
            for (int i = 0; i < a; i++)
            {
                cout << "1 ";
            }
        }
        else
        {
            if(b==2 && a%2!=0)
            cout<<"NO";
            else if(b==c)
            cout<<"NO";
            else if(a%2==0)
            {
                cout<<"YES\n"<<a/2<<endl;
                for(i=1;i<=a/2;i++)
                cout<<"2 ";
                
            }
            else if(a%2!=0)
            {
                cout<<"YES\n"<<a/2<<endl<<"3 ";
                 for(i=1;i<a/2;i++)
                cout<<"2 ";
            }
           
        }
        cout << "\n";
    }
    return 0;
}