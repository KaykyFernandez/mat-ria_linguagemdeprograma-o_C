#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    float z;
    scanf("%f",&z);
    float soma = y * z;
    printf("NUMBER = %d\n",x);
    printf("SALARY = U$%.2f\n",soma);

    return 0;
}