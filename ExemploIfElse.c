#include <stdio.h>

int main()
{

    float media;
    

    printf("Informe a Media:");
    scanf("%f", &media);

    if (media >= 5){
        printf("aprovado!");
    }else if (media >= 3)
    {
        printf("RE!");
    }else{
        printf("REPROVADO!");
    }

    return 0;
}