#include <stdio.h>

int main()
{

    int num1, num2, operador;
    float calculo;
    printf("Bem vindo a calculadora\n Vamos calcular!");

    printf("escolha o primeiro numero: ");
    scanf("%d", &num1);

    printf("escolha o segundo numero: ");
    scanf("%d", &num2);

    printf("escolha o operador agora\n 1-SOMA\n 2-SUBTRAIR\n 3-MULTIPLICACAO\n 4-DIVISAO\n");
    scanf("%d", &operador);

    if (operador == 1){
        float calculo = num1 + num2;
        printf("%d + %d = %.2f",num1, num2, calculo);
    }else if (operador == 2){
        calculo = num1 - num2;
        printf("%d - %d = %.2f",num1, num2, calculo);
    }else if (operador == 3){
        calculo = num1 * num2;
        printf("%d * %d = %.2f",num1, num2, calculo);
    }else if (operador == 4){
        calculo = num1 / num2;
        printf("%d / %d = %.2f",num1, num2, calculo);
    }else{
        printf("Opcao invalida, escolha entre 1 e 4.");
    }
    return 0;
}