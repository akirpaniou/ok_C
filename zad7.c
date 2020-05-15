#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, res;
    printf("podaj 2 liczbe: ");
    scanf("%lf", &x);
    scanf("%lf", &y);
    res = x + y;
    printf("Suma: %lf\n", res);

    double res2;



    res2 = x - y;
    printf("Roznica: %lf\n", res2);

    double res3;

    res3 = x * y;
    printf("Iloczyn: %lf\n", res3);

    double res6;
    res6=(100*x)/y;
    printf("res6: %lf\n", res6);

    int res5;
    res5=(int)x%(int)y;
    printf("res5: %d\n", res5);

    double res7;
    res7=(x+y)/2;
    printf("res7: %lf\n", res7);









    return 0;
}
