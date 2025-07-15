#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<int> vv;
        for (auto it: mp)
        {
            vv.push_back(it.second);
        }
        sort(vv.begin(), vv.end());
        reverse(vv.begin(), vv.end());
        stack<int> st;
        for (auto it : vv)
        {
            st.push(it);
        }
        while (!st.empty() && st.top() <= k)
        {
            k -= st.top();
            st.pop();
        }
        int x = st.size();
        cout << max(1, x) << endl;
    }
    return 0;
}