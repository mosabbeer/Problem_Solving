<<<<<<< HEAD
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
        ll a[n], i, min = 99999999999, p, count = 0;
        for (i = 1; i < n; i++)
        {
            cin >> a[i];
            {
                if (a[i] < min)
                {
                    min = a[i];
                    p = i;
                }
            }
        }
        for (i = 1; i < n; i++)
        {
            if (min == a[i])
                count++;
        }
        for (i = 1; i < p; i++)
        {
            if (count > 1)
            {
                if (a[i] == a[i + 1] && a[i] > a[i + 2] && i < n - 2)
                {
                    a[i + 1] = a[i + 2];
                }
            }
            cout << a[i] << " ";
        }
        cout << "0 ";
        for (i = p; i < n; i++)
        {
            if (count > 1)
            {
                if (a[i] == a[i + 1] && a[i] > a[i + 2] && i < n - 2)
                {
                    a[i + 1] = a[i + 2];
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
=======
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],b[n+2],min=90000000000,p,i;
        for(i=0;i<n-1;i++)
        {
            cin>>a[i];
            if(a[i]<min)
            {
                min=a[i];
                p=i;
            }
        }
     for(i=0;i<=p;i++)
     {
        b[i]=a[i];
     }
     b[p+1]=0;
     for(i=p+1;i<n-1;i++)
     {
        b[i+1]=a[i];
     }
     for(i=1;i<n-1;i++)
     {
        if(b[i]==b[i-1] && b[i]<b[i+1])
        {
            b[i]=0;
        }
        else if(b[i]==b[i-1] && b[i+1]<b[i])
        {
            b[i-1]=0;
        }
     }
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
     cout<<endl;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    }
    return 0;
}