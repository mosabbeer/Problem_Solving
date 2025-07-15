#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    string str1 = "1000", str2 = "1001", str3 = "1010", str4 = "1011", str5 = "1100", str6 = "1101", str7 = "1110", str8 = "1111";
    string strfinal = "";
    ll i;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == '>')
        {
            strfinal = strfinal + str1;
        }
        else if (str[i] == '<')
        {
            strfinal = strfinal + str2;
        }
        else if (str[i] == '+')
        {
            strfinal = strfinal + str3;
        }
        else if (str[i] == '-')
        {
            strfinal = strfinal + str4;
        }
        else if (str[i] == '.')
        {
            strfinal = strfinal + str5;
        }
        else if (str[i] == ',')
        {
            strfinal = strfinal + str6;
        }
        else if (str[i] == '[')
        {
            strfinal = strfinal + str7;
        }
        else
        {
            strfinal = strfinal + str8;
        }
    }
    ll sum = 0, n, j, p;
    i = 1;
    n = strfinal.length();
    for (j = n - 1; j >= 0; j--)
    {
        p = strfinal[j] - 48;
        sum = sum + p * i;
        i = i * 2;
        sum = sum % 1000003;
        i=i%1000003;
       // if (i > 1000000000000000000)
        //    break;
        sum = sum % 1000003;
    }

    cout << sum;

    return 0;
}