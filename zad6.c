#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Zmienna typu char zawiera %d bajtow\n", sizeof(char));

    int y;
    printf("Zmienna typu int zawiera %d bajtow\n", sizeof(int));

    float e;
    printf("Zmienna typu float zawiera %d bajtow\n", sizeof(float));

    double r;
    printf("Zmienna typu double zawiera %d bajtow\n", sizeof(double));

    short int t;
    printf("Zmienna typu short int zawiera %d bajtow\n", sizeof(short int));

    long int u;
    printf("Zmienna typu long int zawiera %d bajtow\n", sizeof(long int));

    long double i;
    printf("Zmienna typu long double zawiera %d bajtow\n", sizeof(long double));


    return 0;
}
