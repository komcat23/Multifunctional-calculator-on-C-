#include<iostream>
#include<cmath>
using namespace std;

int main()
{    
    cout << "calculator" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;
    char c[99];
    cin >> c;
    if(strcmp(c, "plus") == 0)
    {
        long f = a+b;
        cout << f << endl;
    }
    else if(strcmp(c, "minus") == 0)
    {
        long f = a-b;
        cout << f << endl;
    }
    else if(strcmp(c, "multiple") == 0)
    {
        long f = a*b;
        cout << f << endl;
    }
    else if(strcmp(c, "division") == 0)
    {
        double f = a/b;
        cout << f << endl;
    }
    else if(strcmp(c, "pow") == 0)
    {
        long f = pow(a,b);
        cout << f << endl;
    }
    else if(strcmp(c, "sqrt") == 0)
    {
        double f = sqrt(a);
        double g = sqrt(b);
        cout << f << endl;
        cout << g << endl;
    }
    else if(strcmp(c, "cbrt") == 0)
    {
        double f = cbrt(a);
        double g = cbrt(b);
        cout << f << endl;
        cout << g << endl;
    }    
    else if(strcmp(c, "log") == 0)
    {
        double f = log(a);
        double g = log(b);
        cout << f << endl;
        cout << g << endl;
    }
    else if(strcmp(c, "log2") == 0)
    {
        double f = log2(a);
        double g = log2(b);
        cout << f << endl;
        cout << g << endl;
    }
    else if(strcmp(c, "log10") == 0)
    {
        double f = log10(a);
        double g = log10(b);
        cout << f << endl;
        cout << g << endl;
    }
    else if(strcmp(c, "exp") == 0)
    {
        double f = exp(a);
        double g = exp(b);
        cout << f << endl;
        cout << g << endl;
    }
    return 0;
}