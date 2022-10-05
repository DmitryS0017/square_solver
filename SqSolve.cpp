#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdbool.h>

#ifdef DEBUG
#define print printf
#else
#define print ;
#endif
void sort_solves (double* a, double* b)
{
    double num = 0;

    if (*a > *b){
        num = *a;
        *a = *b;
        *b = num;
    }
}
bool IsZero (double num)
    {
    const double Zero = 1e-10;

    if (num < Zero && num > -Zero)
        return 1;
    else
        return 0;
    }


int SolveLn (double const b, double const c,
             double* const x1)
    {

    if (b == 0)
        {
        return 7;
        }
    else
        {
        *x1 = -c / b;
        return 1;
        }
    }


int SolveSq (double const a, double const b, double const c,
             double* const x1, double* const x2)
    {

    if (x1 == x2)
        {
        return -1;
        }
    else if (IsZero (a))
        {
        print ("a=0\n");
        return SolveLn (b, c, x1);
        }
    else if (IsZero (b) && IsZero (c))
        {
        print ("b=c=0\n");
        *x1 = 0;
        return 1;
        }
    else if (IsZero (c))
        {
        print ("c=0\n");
        *x1 = 0;
        return SolveLn (a, b, x1) != 7 ? 2 : 7;
        }

    double Discriminant = b * b - 4 * a * c;

    if (IsZero (Discriminant))
        {
        print ("d=0\n");
        *x1 = *x1 = -b / 2 / a;
        return 1;
        }
    else if (Discriminant < 0)
        {
        print ("d<0\n");
        return 0;
        }
    else
        {
        print ("normal");
        *x1 = (-b - sqrt (Discriminant)) / 2 / a;
        *x2 = (-b + sqrt (Discriminant)) / 2 / a;
        sort_solves(x1,x2);
        return 2;
        }
    }


