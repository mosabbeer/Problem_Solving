#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N, D;
    cin >> N >> D;
    int a[N + 1], i, count = 0, p,div=0;
    for (i = 0; i < N; i++)
        cin >> a[i];
        sort(a,a+N);
        if(a[0]>D)
        cout<<N;
        else
        {
            p=N;
            for(i=N-1;i>=0;i--)
            {
                div=D/a[i]+1;
                p=p-div;
                if(p>=0)
                count++;
                else
                break;
            }
            cout<<count;
        }
    return 0;
}