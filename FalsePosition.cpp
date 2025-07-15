#include <bits/stdc++.h>
using namespace std;
#define ll long long

class FalsePosition
{
private:
    double a, b, tolarance;
    double (*func)(double);

public:
    FalsePosition( double (*func)(double),double a, double b, double tolarance)
    {
        this->func=func;
        this->a = a;
        this->b = b;
        this->tolarance = tolarance;
    }
    double findRoot()
    {
        if (func(a) * func(b) >= 0)
        {
            cout << "Value doesn't exist in this interval\n";
            return -1;
        }
        double c = a;

        while (fabs(func(c)) > tolarance)
        {
            c = (a * func(b) - b * func(a)) / (func(b) - func(a));
            if (func(a) * func(c) < 0)
                b = c;
            else
                a = c;
                 cout << "Current approximation " << c << endl;
    
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
    double a = 1, b = 3, tolarance = 0.0001;
    FalsePosition falsposition(func, a, b, tolarance);
    double root = falsposition.findRoot();
    if (root != -1)
        cout << "Approximate root is " << root << endl;
    else
        cout << "Does not exist";
    return 0;
}