#include <stdio.h>

int main()
{

    float n1, n2, media;

    while (1){
        scanf("%f", &n1);

        if (n1 >= 0 && n1 <= 10){
            break;
        }else{
            printf("nota invalida\n");
        }
    }
    while (1){
        scanf("%f", &n2);

        if (n2 >= 0 && n2 <= 10){
            break;
        }else{
            printf("nota invalida\n");
        }
    }

    media = ( n1 + n2)/ 2;
    printf("media = %.2f\n", media);

    return 0;
}
