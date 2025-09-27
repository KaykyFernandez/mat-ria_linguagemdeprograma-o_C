#include <stdio.h>
int main()
{
    int X, i, soma_pares;
    soma_pares = 0;

    scanf("%d", &X);
    while (X != 0)
    {

        if (X % 2 != 0)
        {
            X++;
        }

        for (i = 0; i < 5; i++)
        {
            soma_pares = soma_pares + X;
            X += 2;
        }
        printf("%d\n", soma_pares);
        scanf("%d", &X);
        soma_pares = 0;
    }
    
    

    return 0;
}