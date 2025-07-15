#include <bits/stdc++.h>
using namespace std;
#define ll long long

class NewtonRephsonMethod
{
private:
    int max_iteration;
    double initial_guess;
    double tolarence;

public:
    NewtonRephsonMethod(double initial_guess, double tolarance, int max_iteration)
    {
        this->initial_guess = initial_guess;
        this->max_iteration = max_iteration;
        this->tolarence = tolarance;
    }
    double f(double x)
    {
        return x * x-5;
    }
    double f_f(double x)
    {
        return 2*x;
    }
    double findRoot()
    {
        double x_n = initial_guess;
        double x_n1;
        int iteration = 0;
        while (iteration < max_iteration)
        {
            double fx = f(x_n);
            double f_fx = f_f(x_n);
            if (f_fx == 0)
            {
                cout << "Not Possible\n";
                return -1;
            }
            x_n1 = x_n - fx / f_fx;
            if (fabs(x_n1 - x_n) < tolarence)
            {
                
                return x_n1;
            }
            cout << "Observed after " << iteration + 1 << " iterations "<<x_n1<<endl;;
            x_n = x_n1;
            iteration++;
            cout << "Maximum reached \n";
            
        }
        return x_n1;
    }
};
int main()
{
    double initial = 2.0, tolarance = 0.0001;
    int max_iteration = 100;
    NewtonRephsonMethod newton(initial, tolarance, max_iteration);
    double root = newton.findRoot();
    if (root != -1)
        cout << "Approximate root is " << root << endl;
    else
        cout << "Does not exist";
    return 0;
}