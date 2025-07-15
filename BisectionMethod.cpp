#include <bits/stdc++.h>
using namespace std;
#define ll long long
<<<<<<< HEAD

class BisectionMethod
{
public
    BisectionMethod(double tolerance, int maxiterations) : tolerance(tolerance), maxiterations(maxiterations)
    {
        generateRandomInterval();
    }
    double findRoot()
    {
        double c;
        for (int i = 0; i < maxiterations; ++i)
        {
            c = (a + b) / 2;
            cout << "iteration X" << iteration << "=" << c << endl;
            iteration++;
            double f_c = func(c);
            if (fabs(f_c) < tolarance || (b - a) / 2 < tolarance)
            {
                return c;
            }
            if (func(a) * f_c < 0)
            {
                b = c;
            }
            else
            {
                a = c;
            }
        }
        return c;
    }

    private: double a,b,tmp,tolarance,iteration=1;
    int maxiteration;
    double func(double x) {
        return x*x*x-x*x+2;
    }
    void generateRandomInterval()
    {
        srand(static_cast<unsigned>)
    }

};

int main()
{

    return 0;
=======
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
>>>>>>> 3f47f41b2d17c13cf5334cec5206840e22230c35
}