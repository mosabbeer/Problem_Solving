#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int maxstk = 100, top = -1;
int stk[100] = {0};
void push(int value)
{
    if (top == maxstk)
        cout << "Over flow\n";
    else
    {
        top++;
        stk[top] = value;
    }
}
int pop()
{
    int value;
    if (top == -1)
        cout << "Under Flow\n";
    else
    {
        value = stk[top];
        top--;
    }
    return value;
}
int main()
{
    int l, a, b, c, d, m, n, i;
    string str;
    cin >> str;
    cin >> a >> b >> c >> d;
    l = str.length();
    for (i = l - 1; i >= 0; i--)
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            if (str[i] == 'a')
                push(a);
            else if (str[i] == 'b')
                push(b);
            else if (str[i] == 'd')
                push(d);
            else
                push(c);
        }
        else
        {
            if (str[i] == '+')
            {
                m = pop();
                n = pop();
                push(m + n);
            }
            else if (str[i] == '-')
            {
                m = pop();
                n = pop();
                push(m - n);
            }
            else if (str[i] == '*')
            {
                m = pop();
                n = pop();
                push(m * n);
            }
            else if (str[i] == '/')
            {
                m = pop();
                n = pop();
                push(m / n);
            }
            else
            {
                m = pop();
                n = pop();
                push(pow(m, n));
            }
        }
    }
    cout << pop();
    return 0;
}