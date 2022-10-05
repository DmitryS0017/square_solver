#include "SqSolve.cpp"
#include "InputOutput.cpp"
#include "SqSolve.h"
#include "Test.cpp"


int main()
{

    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0;
    Input(&a, &b, &c);

    int amount_sl = SolveSq(a, b, c, &x1, &x2);
    Output(amount_sl, &x1, &x2);

    Start_test();

    return 0;
}


