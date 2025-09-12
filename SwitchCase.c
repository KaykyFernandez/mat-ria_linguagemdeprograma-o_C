#include <stdio.h>

int main(){

    int num_dia;

    printf("informe o numero do dia:");
    scanf("%d",&num_dia);

    switch (num_dia)
    {
    case 1 :
        printf("domingo");
        break;

    case 2:
        printf("segunda-feira");
        break;

    case 3 :
        printf("terça-feira");
        break;

    case 4 :
        printf("quarta-feira");
        break;
    
    case 5 :
        printf("quinta-feira");
        break;
    
    case 6 :
        printf("sexta-feira");
        break;
    
    case 7 :
        printf("sábado");
        break;
    
    default:
    printf("numero invalido, escolha de 1 a 7");
        break;
    }
    
    return 0;
}