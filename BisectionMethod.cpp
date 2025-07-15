#include <bits/stdc++.h>
using namespace std;
#define ll long long
class BisectionMethod
{

private:
    double (*func)(double);
    double a, b, tol;

public:
    BisectionMethod(double (*function)(double), double a, double b, double tol)
    {
        this->func = function;
        this->a = a;
        this->b = b;
        this->tol = tol;
    }
    double findRoot()
    {
        if (func(a) * func(b) >= 0)
        {
            cout << "function does not satisfi the condition";
            return -1;
        }
        double c = a;
        while ((b - a) / 2 > tol)
        {
            c = (a + b) / 2.0;
            if (func(c) == 0.0)
                break;
            if (func(c) * func(a) < 0)
                b = c;
            else
                a = c;
                cout<<a<<" "<<b<<endl;
        }
        return c;
    }
};
double func(double x)
{
    return x * x * x - 2 * x - 5;
}
int main()
{
    double a = 1, b = 3;
    double tolarance = 0.0001;
    BisectionMethod bisection(func, a, b, tolarance);
    double root = bisection.findRoot();
    if(root!=-1)
    cout << "Approximate root is" << root << endl;
    else
    cout<<"Does not exist";
    return 0;  
}