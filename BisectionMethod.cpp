#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
}