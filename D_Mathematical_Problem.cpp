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
        cin >> str;
        int i, p, q, min1 = 999, t,max=-1;
        if (n == 2)
        {
            if (str[0] == '0')
                cout << str[1];
            else
                cout << str;
            cout << endl;
        }
        else if (n == 3)
        {
            p = (str[0] - 48) * 10 + str[1] - 48;
            q = (str[1] - 48) * 10 + str[2] - 48;
            p = min(p + (str[2] - 48), p * (str[2] - 48));
            q = min((q + str[0] - 48), q * (str[0] - 48));
            cout << min(p, q) << endl;
        }
        else
        {
            p = 0;
            q = 0;
            for (i = 0; i < n; i++)
            {
                if (str[i] == '0')
                {
                    p = 1;
                    break;
                }
            }
            if (p == 1)
                cout << "0\n";
            else
            {
                for (i = 0; i < n - 1; i++)
                {
                    p = (str[i] - 48) * 10 + str[1 + i] - 48;
                    if (p < min1)
                    {
                        min1 = p;
                        q = i;
                    }
                }
                if (min1 / 10 == 1)
                {
                    for (i = 0; i < n - 1; i++)
                    {
                        if(str[i]=='1')
                        {
                            t=str[i+1]-48;
                            if(t>max)
                            {
                                max=t;
                                q=i;
                            }
                        }
                    }
                    min1=10+max;
                }
                if(str[n-1]=='1' && min1/10!=1)
                {
                    for(i=0;i<n-2;i++)
                    {
                        if(str[i]==str[n-2])
                        {
                            if((str[i+1]-48)>max)
                            {
                                max=str[i+1]-48;
                                q=i;
                            }
                        }
                    }
                  
                    min1=max+(str[n-2]-48)*10;
                }
               str[q]='0';
               str[q+1]='0';
                int sum = 0;
                for (i = 0; i < n; i++)
                {
                    if (str[i] != '0' && str[i] != '1')
                    {
                        sum = sum + str[i] - 48;
                    }
                }
                cout <<sum+min1<< endl;
              //  cout<<str<<" "<<max<<endl;
            }
        }
    }
    return 0;
}