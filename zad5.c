#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, res1, res2;
    printf("Podaj boki prostokata: ");
    scanf("%lf", &x);
    scanf("%lf", &y);

    res1 = x * y;
    printf("pole: %lf", res1);

    res2 = 2*x + 2*y;
    printf("Obwod: %lf", res2);



    return 0;
}
