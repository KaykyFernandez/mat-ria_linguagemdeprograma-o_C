#include <stdio.h>

int main()
{
    float gasosa;
    int KM;
    scanf("%d", &KM);
    scanf("%f", &gasosa);
    float consumo = KM / gasosa;
    printf("%.3f km/l\n", consumo);

    return 0;
}