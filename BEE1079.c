#include <stdio.h>

int main(){
    float a1, a2, a3, media;
    int qtd, i;
    
    scanf("%d",&qtd);

    for(i=1; i<=qtd; i++){
        scanf("%f",&a1);

        scanf("%f",&a2);

        scanf("%f",&a3);

        media = ((a1*2) + (a2*3) + (a3*5)) / 10;
        printf("%.1f\n", media);  
    }
    

    return 0;
}