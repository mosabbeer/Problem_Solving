#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int h1, h2, m1, m2, duration;
    string str1, str2;
    cin >> str1 >> str2;
    h1 = (str1[0] - 48) * 10 + (str1[1] - 48);
    m1 = (str1[3] - 48) * 10 + (str1[4] - 48);
    h2 = (str2[0] - 48) * 10 + (str2[1] - 48);
    m2 = (str2[3] - 48) * 10 + (str2[4] - 48);
    duration = (h2 - h1) * 60 + (m2 - m1);
    duration = duration / 2;
    int h, m;
    h = duration / 60;
    m = duration % 60;
    //cout<<duration<<endl;
  //  cout<<h1<<" "<<m1<<endl;
    //cout<<h<<" "<<m<<endl;
    h1 = h1 + h;
    m1 = m1 + m;
    if(m1>=60)
    h1=h1+m1/60;
    m1=m1%60;
    //cout<<h1<<" "<<m1<<endl;
    if (h1 < 10)
        cout << "0" << h1;
    else
        cout << h1;
    if (m1 < 10)
        cout << ":0" << m1;
    else
        cout << ":" << m1;

    return 0;
}