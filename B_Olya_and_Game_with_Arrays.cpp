<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,i,m,j,min=9999999099,p,sum=0;
        cin>>n;
          ll a[n+1][50001];
        for(i=0;i<n;i++)
        {
            cin>>m;
          
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
            sort(a[i],a[i]+m);
        }
        for(i=0;i<n;i++)
        {
           if(a[i][0]<min)
           {
            min=a[i][0];
            p=i;
           }
           else if(a[i][0]==min)
           {
            if(a[i][1]<a[p][1])
            {
                min=a[i][0];
                p=i;
            }
            else
            {
                 min=a[i][0];
            }
           }
        }
        for(i=0;i<n;i++)
        {
            if(i!=p)
            {
                sum=sum+a[i][1];
            }
        }
        sum=sum+min;
          if(n==1)
        sum=a[0][0];
        cout<<p<<endl;
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
        ll n, i, m, j, min = 999999999, p, sum = 0, min1 = 999999999;
        cin >> n;
        vector<vector<ll>> a(n+1);
        for (i = 0; i < n; i++)
        {
            cin >> m;
            for (j = 0; j < m; j++)
            {
                cin >>p;
                a[i].push_back(p);
            }
            sort(a[i].begin(), a[i].end());
            sum = sum + a[i][1];
            
            if (min > a[i][1])
            {
                min = a[i][1];
            }
            if (min1 > a[i][0])
            {
                min1 = a[i][0];
            }
        }
        sum=sum-min+min1;
        cout << sum<< endl;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    }
    return 0;
}