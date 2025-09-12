#include <stdio.h>

int main(){
    int x, y;

    printf("informe o valor de X:");
    scanf("%d",&x);

    printf("informe o valor de Y:");
    scanf("%d",&y);

    if ((x>=0) && (x<=432) && (y>=0) && (y<=468)){
            printf("Dentro!\n");
    }else{
        printf("Fora!\n");
    }
    

    return 0;
}
