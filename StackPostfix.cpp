#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int stack[100];
int top = -1;
void push(int value)
{
    if (top == 100)
        cout << "Over Flow\n";
    else
    {
        top++;
        stack[top] = value;
    }
}
int pop()
{
    int value;
    if (top == -1)
    {
        cout << "Under Flow";
    }
    else
    {
        value = stack[top];
        top--;
    }
    return value;
   // cout<<value<<endl;
}
int main()
{
    string str;
    cin >> str;
    int n = str.length(), i, p, a, b;
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            p = str[i] - 48;
            push(p);
        }
        else
        {
            if (str[i] == '+')
            {
                a = pop();
                b = pop();
                push(b + a);
            }
            else if (str[i] == '-')
            {
                a = pop();
                b = pop();
                push(b - a);
            }
            else if (str[i] == '*')
            {
                a = pop();
                b = pop();
                push(b * a);
            }
            else if (str[i] == '/')
            {
                a = pop();
                b = pop();
                push(b / a);
            }
            else if (str[i] == '^')
            {
                a = pop();
                b = pop();
                push(pow(b, a));
            }
        }
    }
    cout << stack[top];
    return 0;
}