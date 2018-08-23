#include <stdio.h>
#include<stdlib.h>
#include<math.h>

/*
 * 4x1 + x2 - x3 = 3
 * 2x1 + 7 x2 + x3 = 19
 * x1 - 3 x2 +12 x3	= 31
 */

double X1(double x2, double x3)
{
    return((3 - x2 + x3)/4);
}

double X2(double x1, double x3)
{
    return((19 - (2 * x1) - x3)/7);
}

double X3(double x1, double x2)
{
    return((31 - x1 + (3 * x2))/12);
}

void GaussSeidel()
{
    double x1 = 0, x2 = 0, x3 = 0, e = 0.001;
    double p1 = 10, p2 = 10, p3 = 10;

    int count = 0;
    printf("\nGuass Seildel\n\nSl.No.\tX1\t\t\tX2\t\t\tX3\n%d\t%lf\t\t%lf\t\t%lf\n", count, x1, x2, x3);

    while(fabs(x1 - p1) > e && fabs(x2 - p2) > e && fabs(x3 - p3) > e)
    {
        count++;

        p1 = x1;
        p2 = x2;
        p3 = x3;

        x1 = X1(x2, x3);
        x2 = X2(x1, x3);
        x3 = X3(x1, x2);

        printf("%d\t%lf\t\t%lf\t\t%lf\n", count, x1, x2, x3);
    }

    printf("\nThe Exact Solution Is : X1 = %0.4lf, X2 = %0.4lf and X3 = %0.4lf\n", x1, x2, x3);
}

int main()
{
    GaussSeidel();
    return 0;
}