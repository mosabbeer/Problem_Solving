<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],b[n+1],i,p,l=1,r=1,count=1,max=0;
        for(i=1;i<=n;i++)
        cin>>a[i];
        cin>>b[1];
        for(i=2;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]>=b[i-1])
            {
                count++;
                p=i;
                if(count>max)
                {
                    l=p;
                    max=count;
                }

            }
            else
            {
            count=1;
            }
        }
        for(i=l;i>=2;i--)
        {
            if(b[i]<b[i-1])
            {
                r=i;
                break;
            }
        }
        cout<<r<<" "<<l<<endl;
=======
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
        int a[n + 1], b[n + 1], i, p = 0, l = 0, m = 0, q = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                p = i + 1;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                q = i;
                break;
            }
        }
        while (p != 0 && b[p] >= b[p - 1])
            p--;
        while (q != n - 1 && b[q] <= b[q + 1])
            q++;

        cout << p + 1 << " " << q + 1 << endl;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    }
    return 0;
}