#include <stdio.h>

int main()
{
    int N, R, L, D;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("infome a posição do L\n");
        scanf("%d", &L);

        printf("infome a posição do R\n");
        scanf("%d", &R);

        printf("infome a posição do D\n");
        scanf("%d", &D);

        if ((R > 50) && (L < R) && (R > D)){
            printf("S\n");
        }else
        {
            printf("N\n");
        }
    }

    return 0;
}
