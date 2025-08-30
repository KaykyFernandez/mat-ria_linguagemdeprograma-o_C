#include <stdio.h>

int main()
{

    int pc1, qtd1, pc2, qtd2;
    float valor1, valor2;
    scanf("%d %d %f", &pc1, &qtd1, &valor1);
    scanf("%d %d %f", &pc2, &qtd2, &valor2);
    float soma1 = qtd1 * valor1;
    float soma2 = qtd2 * valor2;
    float pagar = soma1 + soma2;
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);

    return 0;
}