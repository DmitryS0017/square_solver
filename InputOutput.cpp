#include <stdio.h>


void Input (double* const a, double* const b, double* const c)
    {
    printf ("Enter the coefficients of the quadratic equation a, b, c: ");

    while (scanf ("%lf %lf %lf", a, b, c) != 3)
        {
        while (getchar() != '\n');

        printf ("Uncorrect input, retry again: ");
        }
    }


void Output (int const amount_sl, double* const x1, double* const x2)
    {
    switch (amount_sl)
        {
        case -1:
            printf ("Invalid input parameters");
            break;

        case 0:
            printf ("The equation has no solves\n");
            break;

        case 1:
            printf ("Solve of the equation:\nx1 = %.5lf\n", *x1);
            break;

        case 2:
            printf ("Solves of the equation:\nx1 = %.5lf\nx2 = %.5lf\n", *x1, *x2);
            break;

        case 7:
            printf ("The equation has infinitely many solves\n");
            break;

        default:
            break;
        }
    }
