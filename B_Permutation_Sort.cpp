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
        ll a[n+1],i,possition,min=999,val=0;
        cin>>a[1];
        for(i=2;i<=n;i++){
            cin>>a[i];
            if(a[i]<a[i-1])
            val++;
            if(a[i]<min){
                min=a[i];
            }
        }
        if(val==0){
            cout<<"0\n";
        }
        else{
            if(min>a[1])
            cout<<"1\n";
            else
            cout<<"2\n";
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
        int a[n + 1], i, min = 3429, max = -1;
        cin >> a[0];
        int count = 0;
        for (i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
            if (a[i] > a[i - 1])
                count++;
        }
        if(count==n-1)
        cout<<"0\n";
        else
        {
            if(min>a[0])
            min=a[0];
            if(max<a[0])
            max=a[0];
            if(max==a[0] && min==a[n-1])
            cout<<"3\n";
            else if(a[0]==min|| a[n-1]==max)
            cout<<"1\n";
            else
            cout<<"2\n";
            //cout<<min<<max;
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
        }
    }
    return 0;
}