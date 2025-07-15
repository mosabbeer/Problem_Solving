#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, i,item;
    cin>>n;
    int a[n+1];
    int front = 0, rear = 0;
    
    while (1)
    {
        cin>>item;
        if((front==1 && rear==n)|| front==rear+1)
        {
            cout<<"Overflow\n";
            break;
        }
      else  if (rear < n)
        {
             rear++;
            front=1;
            a[rear] = item;
           
        }
      
    }
    for (i = front; i <=rear; i++)
    {
        cout << a[i];
    }
   // cout<<a[rear];
    return 0;
}