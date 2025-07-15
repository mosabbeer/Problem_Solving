<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        cin>>n>>k;
        ll sum=0,a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            b[i]=sum;
        }
        while(k--)
        {
            i=0;
            if(b[i]+b[i+1]>=b[n-1]-b[n-2])
            {
                b[n-1]=0;
                n--;
            }
            else
            {
                a[i+1]=0;
                i=i+2;
            }
        }
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
        int n, k;
        cin >> n >> k;
        ll a[n + 1], i, sum = 0, l, max = -1, d;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            sum = sum + a[i];
            a[i] = sum;
        }
        sum = 0;
        l = k;
        for (i = 1; i <= 2 * k; i++)
        {
            d = 2 * l - 1;
            if (l == 0)
                a[d] = 0;
            sum = a[n - 1] - a[d];
            // cout<<sum<<endl;
            if (sum > max)
                max = sum;
            n--;
            l--;
            if(a[d]==0)
            break;
        }
        cout << max << endl;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    }
    return 0;
}