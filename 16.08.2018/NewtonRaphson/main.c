#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int count=0;
double e = 0.0001, x = 0.00, y = 1.00;

double f(double x)
{
    return((x * x * x) - (2 * x) - 5);
}

double df(double x)
{
    return( 3*(x * x) - 2);
}

void NewtonRaphson()
{

    while(1)
    {
        if((f(x) < 0 && f(y) > 0) || (f(x) > 0 && f(y) < 0))
        {
            printf("\nNewton Raphson\n\nRoot lies between (%0.3f, %0.3f)\n", x, y);
            break;
        }

        else
        {
            x++;
            y++;
        }
    }


    x = (x+y)/2;

    printf("\nAssumed X0 = %lf\n\nSl.No\t\tX\t\t\t\t\tf(X)\n", x);

    while(fabs(x-y) > e)
    {
        y = x;
        x = y - (f(y) / df(y));
        count++;

        printf("X[%d]\t\t%lf\t\t\t%lf\n", count, x, f(x));
    }

    printf("\nThe root of Newton Raphson Method : %lf", x);

}

int main()
{
    NewtonRaphson();
    return 0;
}