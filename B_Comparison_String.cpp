    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, count = 1, max = 0, i;
            cin >> n;
            string str;
            cin >> str;
            for (i = 1; i < n; i++)
            {
                if (str[i] == str[i - 1])
                {
                    count++;
                    if (count > max)
                        max = count;
                }
                else
                    count = 1;
            }
            if(max==0)
            {
                max=1;
            }
             cout<<max+1<<endl;
        }
        return 0;
    }