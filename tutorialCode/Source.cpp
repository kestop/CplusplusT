#include <iostream>
#include <cctype>
#include <array>
#include <string>
#include <fstream>
#include <ostream>
#include "Source.h"
using namespace std;

double calculate(double a, double b, double (*ps)(double, double));
double add(double x, double y);
double sub(double x, double y);

int main(int args, char* argv[])
{
    double(*func[2])(double, double) = { add,sub };

    for (size_t i = 0; i < 2; i++)
    {
        cout << (*func[i])(0.4, 10.4) << endl;
  

    }

    return 0;
}

double calculate(double a, double b, double (*ps)(double, double))
{
    return (*ps)(a, b);
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}





