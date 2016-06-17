#include <iostream>
#include <string>
#include <array>
#include <math.h>
using namespace std;



int main(int args, char* argv[])
{

    double a = 100, b = a;
    const double rate1 = 0.1;
    const double rate2 = 0.05;

    int year = 0;

    while ( b <= a)
    {
        a += (100*rate1);
        b *= (1 + rate2);
        year++;
    }

    cout << "a = " << a << endl
        << "b = " << b << endl
        << "at year " << year << endl;

    return 0;
}

