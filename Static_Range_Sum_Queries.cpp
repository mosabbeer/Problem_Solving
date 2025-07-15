#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll segtree[1000000] = {0};
void buileTree( ll a[],ll i, ll l, ll r)
{
    if (l == r)
    {
        segtree[i] = a[r];
        return;
    }
    ll mid = (l + r) / 2;
    buileTree(a,2 * i + 1, l, mid);
    buileTree(a,2 * i + 2, mid + 1, r);
    segtree[i] = segtree[2 * i + 1] + segtree[2 * i + 2];
}
ll quary(ll segment[],ll start,ll end,ll i,ll l,ll r)
{
    ll mid=(l+r)/2;
    if(l > end || r < start)
    return 0;
    if(l>=start && r<=end)
    return segment[i];
    return quary(segtree,start,end,2*i+1,l,mid)+quary(segtree,start,end,2*i+2,mid+1,r);
}
int main()
{
    ll n, q;
    cin >> n >> q;
    ll i, a[n + 1],sum;
    for (i = 0; i < n; i++)
        cin >> a[i];
    buileTree(a,0, 0, n - 1);
    while(q--)
    {
        ll s,r;
        cin>>s>>r;
        sum=quary(segtree,s-1,r-1,0,0,n-1);
        cout<<sum<<endl;
    }
    return 0;
}