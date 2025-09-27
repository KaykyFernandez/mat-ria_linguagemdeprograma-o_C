#include <stdio.h>

    int main(){
        int X, contador, soma;
        float media;

        scanf("%d",&X);
        soma = 0;
        contador = 0;
        while (X >= 0){ 
            soma += X;
            contador++;
            scanf("%d",&X); 

        }
         media = (float) soma / contador;
         printf("%.2f\n", media);

        return 0;
    }
    