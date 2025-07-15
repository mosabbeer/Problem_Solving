<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        
    ll n,a[200000],sum=0,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
        if(a[0]>=0)
        cout<<sum<<endl;
        else
        {
            if(a[0]<0 && a[1]<=0)
            {
                sum=sum-2*(a[0]+a[1]);
                cout<<sum<<endl;
            }
            else if((-1*a[0])>a[1])
            {
                sum=sum-2*(a[0]+a[1]);
                cout<<sum<<endl;
            }
            else
            cout<<sum<<endl;
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

        int n;
        cin >> n;
        ll a[n + 1], i,p, sum = 0, sum1 = 0, count0 = 0, countNeg = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
            if (a[i] == 0)
                count0++;
            else if (a[i] < 0)
                countNeg++;
        }
        if (countNeg == 0)
            cout << sum << endl;
        else
        {
            sum = 0;
            if (count0 != 0 || countNeg % 2 == 0)
            {
                sum = 0;
                for (i = 0; i < n; i++)
                {
                    if (a[i] <= 0)
                        sum = sum - a[i];
                    else
                        sum = sum + a[i];
                }
                cout << sum << endl;
            }
            else if (countNeg == n)
            {
                sort(a,a+n);
                sum = 0;
                for (i = 0; i < n - 1; i++)
                {
                    sum = sum - a[i];
                }
                cout << sum + a[n - 1] << endl;
            }
            else if (countNeg % 2 != 0)
            {
                sum = 0;
                sort(a, a + n);
                for (i = 0; i < countNeg-1; i++)
                    sum = sum - a[i];
                for (i = countNeg + 1; i < n; i++)
                    sum = sum + a[i];
                if (-1 * (a[countNeg - 1]) > a[countNeg])
                    p = -1 * a[countNeg - 1]-a[countNeg];
                else
                    p = a[countNeg]+a[countNeg-1];
                cout << sum + p<<endl;
            }
        }
    }
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
    return 0;
}