#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[9],i,area=1,j;
        for(i=0;i<8;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<8;i=i+2)
        {
            for(j=i+2;j<8;j=j+2)
            {
                if(arr[i]==arr[j])
                {
                    area=area*(arr[i+1]-arr[j+1]);
                }
            }
        }
        if(area<0)
        area=-1*area;
        cout<<area<<endl;
    }
    return 0;
}