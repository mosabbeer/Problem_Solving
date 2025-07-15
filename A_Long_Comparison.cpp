    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            ll  a, b,c,d,l=1,m=1;
            cin >> a >> b>>c>>d;
            l=pow(10,b)+.0001;
            if(l%10==9)
            l++;
            l=l*a;
            m=pow(10,d)+.0001;
            if(m%10==9)
            m++;
            m=m*c;
            if (l > m)
                cout << ">";
            else if (m > l)
                cout << "<";
            else
                cout << "=";
                //cout<<l<<" "<<m;    
            cout << endl;
        }
        return 0;
    }

