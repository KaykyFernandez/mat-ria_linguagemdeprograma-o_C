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

    switch (operador)
    {
    case 1:
        calculo = num1 + num2;
        printf("%d + %d = %.2f",num1, num2, calculo);
        break;
    
    case 2:
        calculo = num1 - num2;
        printf("%d - %d = %.2f",num1, num2, calculo);
        break;

    case 3:
        calculo = num1 * num2;
        printf("%d * %d = %.2f",num1, num2, calculo);
        break;

    case 4:
        calculo = num1 / num2;
        printf("%d / %d = %.2f",num1, num2, calculo);
        break;
    
    default:
        break;
    }

    return 0;
}