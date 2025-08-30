#include <stdio.h>

int main(){

    int ano1, ano2;
    float dado1, dado2;
    printf("Informe o ano mais antigo junto com o dado:");
    scanf("%d %f", &ano1, &dado1);
    printf("Informe o ano mais novo junto com o dado:");
    scanf("%d %f", &ano2, &dado2);

    printf("a diferença entre o ano mais novo %d e mais velho %d e: %.1f", ano1 , ano2, dado1 - dado2 );

    return 0; 
}